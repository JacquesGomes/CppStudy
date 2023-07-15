#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool userExists(string& username, string& password) {
    ifstream file("password.txt");
    string line;

    while (getline(file, line)) {
        size_t delimiterPos = line.find(':');
        string storedUsername = line.substr(0, delimiterPos);
        string storedPassword = line.substr(delimiterPos + 1);

        if (username == storedUsername && password == storedPassword) {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}

void createAccount(string& username, string& password) {
    ofstream file("password.txt", ios::app);
    file << username << ":" << password << "\n";
    file.close();
}

int main() {
    int choice;
    string username, password;

    cout << "1 - Login\n2 - Create Account\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (userExists(username, password)) {
            cout << "Login successful!\n";
        } else {
            cout << "Invalid username or password.\n";
        }
    } else if (choice == 2) {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        createAccount(username, password);
        cout << "Account created successfully!\n";
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}