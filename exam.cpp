#include <iostream>
#include "Exam.h"
using namespace std;

int startExam(question bank[], int numQuestions, Student& student) {
    int score = 0;
    
    cout << "Exam starting now..." << endl << endl;
    
    for(int i = 0; i < numQuestions; i++) {
        display_question(bank[i]);
        
        char ans;
             cin >> ans;
        
        // yeah yeah I know should handle lowercase too but whatever
        if (ans == bank[i].correct_option || ans + 32 == bank[i].correct_option) {
            cout << "Correct!" << endl;
            score++;
        }
        else {
            cout << "Wrong lol, it was " << bank[i].correct_option << endl;
        }
        
        cout << endl;
    }
    
    student.score = score;
    
    cout << "Exam over! You got " << score << " out of " << numQuestions << endl;
    if (score >= numQuestions / 2) {
        cout << "Not bad :)" << endl;
    } else {
        cout << "Better luck next time..." << endl;
    }
    
    return score;
}
