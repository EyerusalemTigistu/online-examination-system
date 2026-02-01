#include <iostream>
#include <fstream>
#include <cstdlib>
#include "SaveResult.h"

using namespace std;

void saveResultToFile(const Student& student) {
    char choice;
    cout << "\nDo you want to save your result? (y/n): ";
    cin >> choice;

    if (choice != 'y' && choice != 'Y') {
        cout << "Result  is not saved\n";
        return;
    }

    const char* userProfile = getenv("USERPROFILE");
    if (!userProfile) {
        cout << "Could not locate Downloads folder.\n";
        return;
    }

    string filePath = string(userProfile) + "\\Downloads\\FinalResults.txt";

    ofstream file(filePath, ios::app);

    if (!file.is_open()) {
        cout << " there is Error when creating the file.\n";
        return;
    }

    file << "Name: " << student.name
         << " | ID: " << student.id
         << " | Score: " << student.score
         << endl;

    file.close();
    cout << " your Result is saved to Downloads  go and check it \n";
}