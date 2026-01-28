#include <iostream>
#include "Student.h"

using namespace std;

void addStudent(Student students[], int& count, int id, const string& name, int score) {
    if (count >= MAX_STUDENTS) {
        cout << "Student list is full!" << endl;
        return;
    }

    students[count].id = id;
    students[count].name = name;
    students[count].score = score;
    count++;
}

void displayStudent(const Student& student) {
    cout << "ID: " << student.id << endl;
    cout << "Name: " << student.name << endl;
    cout << "Score: " << student.score << endl;
    cout << "---------------------" << endl;
}

void displayAllStudents(const Student students[], int count) {
    if (count == 0) {
        cout << "No students to display." << endl;
        return;
    }

    for (int i = 0; i < count; i++) {
        displayStudent(students[i]);
    }
}
