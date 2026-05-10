#include <iostream>
#include <string>

using namespace std;

int main() {

    string username;
    int passwordScore;
    int phishingScore;
    int encryptionScore;
    int totalScore;

    cout << "==== CyberQuest Score Tracker ====" << endl;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password level score: ";
    cin >> passwordScore;

    cout << "Enter phishing level score: ";
    cin >> phishingScore;

    cout << "Enter encryption level score: ";
    cin >> encryptionScore;

    totalScore = passwordScore + phishingScore + encryptionScore;

    cout << "\n==== Leaderboard Entry ====" << endl;
    cout << "User: " << username << endl;
    cout << "Total Score: " << totalScore << endl;

    return 0;
}
