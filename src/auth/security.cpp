#include <iostream>
#include <string>

using namespace std;

bool isStrongPassword(string password) {

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    if(password.length() < 8) {
        return false;
    }

    for(char c : password) {

        if(isupper(c)) {
            hasUpper = true;
        }
        else if(islower(c)) {
            hasLower = true;
        }
        else if(isdigit(c)) {
            hasDigit = true;
        }
        else {
            hasSpecial = true;
        }
    }

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {

    string password;

    cout << "Enter a password to test strength: ";
    cin >> password;

    if(isStrongPassword(password)) {
        cout << "Strong password." << endl;
    }
    else {
        cout << "Weak password." << endl;
    }

    return 0;
}
