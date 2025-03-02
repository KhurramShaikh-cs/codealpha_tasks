#include <iostream>
using namespace std;

struct User {
    string username;
    string password;
};

User users[100]; // Array to store users
int userCount = 0;

void registerUser() {
    if (userCount >= 100) {
        cout << "User limit reached!\n";
        return;
    }
    cout << "Username: ";
    cin >> users[userCount].username;
    cout << "Password: ";
    cin >> users[userCount].password;
    userCount++;
    cout << "Registered successfully!\n";
}

bool loginUser() {
    string user, pass;
    cout << "Username: ";
    cin >> user;
    cout << "Password: ";
    cin >> pass;
    for (int i = 0; i < userCount; i++) {
        if (users[i].username == user && users[i].password == pass) {
            cout << "Login successful!\n";
            return true;
        }
    }
    cout << "Invalid credentials!\n";
    return false;
}

int main() {
    int choice;
    cout << "1. Register\n2. Login\nChoose: ";
    cin >> choice;
    if (choice == 1) registerUser();
    else if (choice == 2) loginUser();
    else cout << "Invalid choice!\n";
    return 0;
}

