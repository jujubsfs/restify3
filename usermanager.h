#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>

struct User {
    std::string username;
    std::string password; // Será armazenado como hash
};

class UserManager {
public:
    UserManager(const std::string& filePath);
    bool createUser(const std::string& username, const std::string& password);
    bool validateUser(const std::string& username, const std::string& password);
    void setupDefaultUsers();

private:
    std::string filePath;
    std::vector<User> users;



    void loadUsers();
    void saveUsers();
    std::string simpleHash(const std::string& input); // Substitui SHA
};

#endif // USERMANAGER_H
