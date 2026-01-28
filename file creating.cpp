// writing code 
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream myFile;
    myFile.open("FinalResults.txt", ios::app); //write
    
	if (myFile.is_open()) {
        myFile <<"Name: " << student.name<< "ID: " << student.id<<  "Score: " << student.score << endl;
        myFile.close();
    }
    else{
		cout << "Error while creating the file";
	}
	
    cout << "File created successfully";
        myFile.close();
        return 0;}