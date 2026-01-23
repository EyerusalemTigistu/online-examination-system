#ifndef STUDENT_H
#define STUDENT_H

#include <string>

// Maximum number of students stored in memory
const int MAX_STUDENTS = 100;

// Struct definition for Student
struct Student {
    int id;
    std::string name;
    int score;
};

// Function declarations
void addStudent(Student students[], int& count, int id, const std::string& name, int score);
void displayStudent(const Student& student);
void displayAllStudents(const Student students[], int count);

#endif
