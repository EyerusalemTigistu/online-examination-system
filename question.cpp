#include <iostream>
#include <cstring>
#include "question.h" 

using namespace std ;
void display_question(question q){
	cout<<endl ;
	cout<<"Question "<<q.text <<endl ;
	cout<<"A)"<<q.options[0]<<endl ;
	cout<<"B)"<<q.options[1]<<endl ;
	cout<<"C)"<<q.options[2]<<endl ;
	cout<<"D)"<<q.options[3]<<endl ;
	cout<<"put your answer here(A or B or C or D): " <<endl ;
}
void saved_question(question bank[]){
	//question 1
	strcpy(bank[0].text,"1.What is the best subject off of the courses you take?");
	strcpy(bank[0].options[0],"Algebra");
	strcpy(bank[0].options[1],"Computer Programming");
	strcpy(bank[0].options[2],"Digital Logic Design");
	strcpy(bank[0].options[3],"Fundamentals of Data Base");
	bank[0].correct_option='A' ;
	//question 2
	strcpy(bank[1].text,"2.Math question:what is the value of the integral of negative and positve equal spaces?");
	strcpy(bank[1].options[0],"0");
	strcpy(bank[1].options[1],"sqrt 2");
	strcpy(bank[1].options[2],"-1");
	strcpy(bank[1].options[3],"1");
	bank[1].correct_option='A' ;
	//question 3
	strcpy(bank[2].text,"3.Biology question:what is the power house of a cell called?");
	strcpy(bank[2].options[0],"Mytosis");
	strcpy(bank[2].options[1],"Myosis");
	strcpy(bank[2].options[2],"Mitochondria");
	strcpy(bank[2].options[3],"Mylase");
	bank[2].correct_option='C' ;
	//question 4
	strcpy(bank[3].text,"4.Physics question:If an airplane is flying 34km/hr south what is the name of the copilot?");
	strcpy(bank[3].options[0],"44.11");
	strcpy(bank[3].options[1],"45.11");
	strcpy(bank[3].options[2],"42.11");
	strcpy(bank[3].options[3],"40.12");
	bank[3].correct_option='D' ;
	//question 5 
	strcpy(bank[4].text,"5.chemistry question: Which element of the periodic table is the most reactive?");
    	strcpy(bank[4].options[0],"Carbon");
    	strcpy(bank[4].options[1],"Flourine");
    	strcpy(bank[4].options[2],"Francium");
    	strcpy(bank[4].options[3],"Oxygen");
    	bank[4].correct_option='B' ;
}