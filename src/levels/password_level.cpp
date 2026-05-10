#include <iostream>
#include <string>

using namespace std;

int main() {

    int choice;

    cout << "==== Password Security Challenge ====" << endl;
    cout << "Which password is the MOST secure?" << endl;

    cout << "\n1. password123" << endl;
    cout << "2. Cyber2025" << endl;
    cout << "3. Cyb3r$Quest!99" << endl;
    cout << "4. qwerty" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    if(choice == 3) {
        cout << "\nCorrect!" << endl;
        cout << "Strong passwords contain uppercase letters," << endl;
        cout << "lowercase letters, numbers, and special characters."
             << endl;
    }
    else {
        cout << "\nIncorrect." << endl;
        cout << "The strongest password was: Cyb3r$Quest!99"
             << endl;
    }

    return 0;
}
