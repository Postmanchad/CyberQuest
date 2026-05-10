#include <iostream>
#include <string>

using namespace std;

int main() {

    string username;
    string password;

    const string correctUsername = "admin";
    const string correctPassword = "Cyber123!";

    int attempts = 0;
    const int maxAttempts = 3;

    cout << "==== CyberQuest Login ====" << endl;

    while(attempts < maxAttempts) {

        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        if(username == correctUsername &&
           password == correctPassword) {

            cout << "Login successful!" << endl;
            return 0;
        }

        attempts++;

        cout << "Invalid username or password." << endl;
        cout << "Attempts remaining: "
             << maxAttempts - attempts
             << endl;
    }

    cout << "Account temporarily locked due to too many failed login attempts."
         << endl;

    return 0;
}
