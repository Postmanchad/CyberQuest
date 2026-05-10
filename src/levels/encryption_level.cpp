#include <iostream>
#include <string>

using namespace std;

int main() {

    string answer;

    cout << "==== Encryption Basics Challenge ====" << endl;

    cout << "\nA Caesar cipher shifts each letter by a fixed number." << endl;
    cout << "In this challenge, each letter was shifted by 1." << endl;

    cout << "\nEncrypted message: DBU" << endl;
    cout << "Hint: Shift each letter back by 1." << endl;

    cout << "\nEnter the decoded word: ";
    cin >> answer;

    if(answer == "CAT" || answer == "cat") {

        cout << "\nCorrect!" << endl;
        cout << "DBU becomes CAT when each letter is shifted back by 1." << endl;
    }
    else {

        cout << "\nIncorrect." << endl;
        cout << "The correct answer was CAT." << endl;
    }

    return 0;
}
