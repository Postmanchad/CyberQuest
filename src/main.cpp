#include <iostream>
#include <fstream>

using namespace std;

int main() {

    int choice;

    ofstream logFile("logs/activity.log", ios::app);

    cout << "==== Welcome to CyberQuest ====" << endl;

    cout << "\n1. Login" << endl;
    cout << "2. Password Security Challenge" << endl;
    cout << "3. Phishing Detection Challenge" << endl;
    cout << "4. Encryption Basics Challenge" << endl;
    cout << "5. View Scores" << endl;
    cout << "6. Exit" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    if(choice == 1) {

        cout << "\nOpening Login System..." << endl;
        logFile << "User opened Login System" << endl;
    }
    else if(choice == 2) {

        cout << "\nOpening Password Security Challenge..." << endl;
        logFile << "User opened Password Security Challenge" << endl;
    }
    else if(choice == 3) {

        cout << "\nOpening Phishing Detection Challenge..." << endl;
        logFile << "User opened Phishing Detection Challenge" << endl;
    }
    else if(choice == 4) {

        cout << "\nOpening Encryption Basics Challenge..." << endl;
        logFile << "User opened Encryption Basics Challenge" << endl;
    }
    else if(choice == 5) {

        cout << "\nOpening Score Tracker..." << endl;
        logFile << "User opened Score Tracker" << endl;
    }
    else if(choice == 6) {

        cout << "\nExiting CyberQuest..." << endl;
        logFile << "User exited CyberQuest" << endl;
        
    }
    else {

        cout << "\nInvalid choice." << endl;
    }
    
 logFile.close();
    
    return 0;
}
