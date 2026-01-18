#ifndef QUESTION_H
#define QUESTION_H
struct question {
	char text[350];
	char options[4][150];
	char correct_option;
} ;
 void display_question(question q) ;
 void saved_question(question bank[]) ;
 #endif 
