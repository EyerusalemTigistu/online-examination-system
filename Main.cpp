#include <iostream>
#include "question.h"
#include "Exam.h"
#include "Student.h"
#include"SaveResult.h"

using namespace std;

int main() {

    question bank[5];
    saved_question(bank);

    Student s;

    cout << "Enter ID: ";
    cin >> s.id;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << endl << "---- Exam Started ----" << endl;

    startExam(bank, 5, s);

    cout << endl;
    cout << "---- Exam Finished ----" << endl;
    cout << "Student Name: " << s.name << endl;
    cout << "Student ID: " << s.id << endl;
    cout << "Final Score: " << s.score << " / 5" << endl;

    saveResultToFile(s);

    cout << endl << "Press any key to exit";
    cin.ignore();
    cin.get(); 


    return 0;
}
