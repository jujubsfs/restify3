#include "usermanager.h"
#include <algorithm>

UserManager::UserManager(const std::string& filePath) : filePath(filePath) {
    loadUsers();
}

void UserManager::loadUsers() {
    users.clear();
    std::ifstream file(filePath);

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string username, password;
            if (std::getline(iss, username, ',') && std::getline(iss, password)) {
                users.push_back({username, password});
            }
        }
        file.close();
    }
}

void UserManager::saveUsers() {
    std::ofstream file(filePath, std::ios::trunc);

    if (file.is_open()) {
        for (const auto& user : users) {
            file << user.username << "," << user.password << "\n";
        }
        file.close();
    }
}

// Função de hash simples baseada em manipulação de caracteres
std::string UserManager::simpleHash(const std::string& input) {
    std::string hashed;
    for (char c : input) {
        hashed += std::to_string((c * 31) % 256); // Combina ASCII e módulo
    }
    return hashed;
}

bool UserManager::createUser(const std::string& username, const std::string& password) {
    auto it = std::find_if(users.begin(), users.end(), [&](const User& user) {
        return user.username == username;
    });

    if (it != users.end()) {
        return false; // Usuário já existe
    }

    users.push_back({username, simpleHash(password)});
    saveUsers();
    return true;
}

void UserManager::setupDefaultUsers() {
    users.clear();

    // Defina os usuários manualmente
    users.push_back({"admin", simpleHash("admin123")});
    users.push_back({"user1", simpleHash("password1")});
    users.push_back({"user2", simpleHash("123456")});

    // Salve esses usuários no arquivo
    saveUsers();
}

bool UserManager::validateUser(const std::string& username, const std::string& password) {
    auto it = std::find_if(users.begin(), users.end(), [&](const User& user) {
        return user.username == username && user.password == simpleHash(password);
    });

    return it != users.end();
}
