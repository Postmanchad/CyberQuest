#include <iostream>
#include <string>

using namespace std;

int main() {
    string username;
    string password;

    cout << "==== CyberQuest Login ====" << endl;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if(username == "admin" && password == "Cyber123!") {
        cout << "Login successful!" << endl;
    }
    else {
        cout << "Invalid username or password." << endl;
    }

    return 0;
}
