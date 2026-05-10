#include <iostream>
#include <string>

using namespace std;

int main() {

    int choice;

    cout << "==== Phishing Detection Challenge ====" << endl;

    cout << "\nYou receive the following email:\n" << endl;

    cout << "FROM: security-update@paypa1-support.com" << endl;
    cout << "SUBJECT: URGENT: Verify your account immediately!" << endl;
    cout << "MESSAGE: Click the link below or your account will be suspended."
         << endl;

    cout << "\nWhat is the biggest warning sign?\n" << endl;

    cout << "1. The message sounds urgent" << endl;
    cout << "2. The sender address looks suspicious" << endl;
    cout << "3. The email contains a link" << endl;
    cout << "4. The email mentions account security" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    if(choice == 2) {

        cout << "\nCorrect!" << endl;
        cout << "Attackers often use fake domains that imitate real companies."
             << endl;
    }
    else {

        cout << "\nIncorrect." << endl;
        cout << "The suspicious sender address was the strongest phishing indicator."
             << endl;
    }

    return 0;
}
