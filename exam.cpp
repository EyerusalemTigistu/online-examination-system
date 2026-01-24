#include <iostream>
#include "Exam.h"
using namespace std;

int startExam(question bank[], int numQuestions, Student& student) {
    int score = 0;
    
    cout << "Exam starting now...\n\n";

    for(int i = 0; i < numQuestions; i++) {
        display_question(bank[i]);
        
        char ans;
        cout << "Your answer (A/B/C/D): ";
        cin >> ans;

        if(ans == bank[i].correct_option) {
            score++;
            cout << "Correct!\n";
        } else {
            cout << "Wrong. The right answer is " << bank[i].correct_option << "\n";
        }
        
        cout << endl;
    }

    student.score = score;
    cout << "Exam finished! Your score: " << score << " out of " << numQuestions << "\n";
    return score;
}