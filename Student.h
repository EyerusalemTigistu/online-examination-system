#ifndef STUDENT_H
#define STUDENT_H

#include <string>

const int MAX_STUDENTS = 100;

struct Student {
    int id;
    std::string name;
    int score;
};


void addStudent(Student students[], int& count, int id, const std::string& name, int score);
void displayStudent(const Student& student);
void displayAllStudents(const Student students[], int count);

#endif
