#include"Employee.h"
#include"Professional.h"
#include"nonProf.h"
#include "Header.h"
#include<iostream>
#include <string>
#include<vector>

using namespace std;

int main() {

	//vectors for employees
	vector<Professional> profEmps;
	vector<NonProfessional> nonProfEmps;

	//initially create an employee for each
	Professional pBlank(0, 0, "profNoname",0);
	profEmps.push_back(pBlank);

	NonProfessional npBlank(0,"npNoname",0);
	nonProfEmps.push_back(npBlank);

	char userChoice = 'y';
	char empType;
	string empName;


	//while loop runs until user is done using
	while (userChoice != 'q') {

		//present user with menu
		cout << "Welcome, what would you like to do?" << endl;
		cout << "(a) Access current employee" << endl;
		cout << "(b) Add employee to the system" << endl;
		cout << "Enter a or b : ";

		cin >> userChoice;
		cout << endl;

		switch (userChoice) {
		case 'a':

			//ask user for type of employee
			empType = askForType();

			//search professionals
			if (empType == 'p') {

				cout << "What is the employee's name? : "; 
				cin >> empName;
				Professional profEmp = searchProfessionals(profEmps, empName);

				if (profEmp.getName() == "profNoname") {
					cout << "Employee not found in system." << endl << endl;
					continue;

				}

				//call function to ask what they want with that employee
				whatYouWantProfs(profEmp);

				
			}

			//search nonProfessionals 
			if (empType == 'n') {
				cout << "What is the employee's name? : ";
				cin >> empName;

				NonProfessional nonProfEmp = searchNonProfs(nonProfEmps, empName);

				if (nonProfEmp.getName() == "npNoname") {
					cout << "Employee not found in system." << endl << endl;
					continue;

				}
			
				//call function to ask what they want with that employee
				whatYouWantNonProfs(nonProfEmp);


			}

			
			break;


		case 'b':

			//ask what type of employee they want to add
			empType = askForType();

			//call corresponding function to add that type of employee
			if (empType == 'p') {
				addProfessional(profEmps);

			}

			if (empType == 'n') {
				addNonProfessional(nonProfEmps);

			}

			break;

		}

	}

	
	

	return 0;
}

