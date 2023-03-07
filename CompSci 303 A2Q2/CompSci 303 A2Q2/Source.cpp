#include<vector>
#include<string>
#include<iostream>
#include "Employee.h"
#include "Professional.h"
#include "nonProf.h"

using namespace std;

char askForType() {

	char userType;
	string message;
	
	while (true) {

		try {
			cout << "Is this employee professional or nonprofessional? enter p or n : ";
			cin >> userType;

			if (userType != 'p' && userType != 'n') {
				throw (message);
			}

			return userType;
		}

		catch (...) {

			cout << "Invalid input, please try again." << endl;
			cin.clear();
			cin.ignore(numeric_limits<int>::max(), '\n');
		}
		


	}
	
}

char askForType2() {
	char userType;
	string message;

	while (true) {

		try {
			cout << "Do you want to add a professional or nonprofessional? enter p or n : ";
			cin >> userType;

			if (userType != 'p' && userType != 'n') {
				throw (message);
			}

			return userType;
		}

		catch (...) {

			cout << "Invalid input, please try again." << endl;
			cin.clear();
			cin.ignore(numeric_limits<int>::max(), '\n');
		}



	}

}


Professional searchProfessionals(vector<Professional> employees, string name) {

	for (int i = 0; i < employees.size(); i++) {
		
		string empName = employees.at(i).getName();

		if (empName == name) {
			return employees.at(i);
		}

	}

	return employees.at(0);

	
}

NonProfessional searchNonProfs(vector<NonProfessional> employees, string name) {

	for (int i = 0; i < employees.size(); i++) {

		string empName = employees.at(i).getName();

		if (empName == name) {
			return employees.at(i);
		}

	}

	return employees.at(0);

}

void whatYouWantProfs(Professional profEmp) {
	char userChoice = 'x';

	while (userChoice != 'q') {

		cout << endl;
		cout << profEmp.getName() << ", Employee ID: " << profEmp.getID() << endl;
		cout << "What about this employee would you like to know?" << endl;
		cout << "(a) Weekly Salary" << endl;
		cout << "(b) Health Care Contributions" << endl;
		cout << "(c) Number of Vacation Days" << endl;
		cout << "(e) exit employee" << endl;
		cout << "Enter a,b,c : ";

		cin >> userChoice;
		cout << endl;

		if (userChoice != 'a' && userChoice != 'b' && userChoice != 'c' && userChoice != 'e') {
			cout << "Invalid input, please try again." << endl;

			continue;
		}


		switch (userChoice) {

		case 'a':
			cout << profEmp.getName() << "'s weekly salary is $" << profEmp.calcWeeklySalary() << endl;
			cout << endl;

			break;

		case 'b':
			cout << profEmp.getName() << "'s annual contribution to health care is $" << profEmp.calcHealthCare() << endl;
			cout << endl;

			break;

		case'c':
			cout << "How many vacation days have been used? : ";
			int daysUsed;
			cin >> daysUsed;
			cout << profEmp.getName() << "'s current number of available vacation days is " << profEmp.calcVacationDays(daysUsed) << endl;
			cout << endl;

			break;

		case 'e':
			userChoice = 'q';
			cout << endl;

			break;
		}

	}

	


}

void whatYouWantNonProfs(NonProfessional nonProfEmp) {
	char userChoice = 'x';

	while (userChoice != 'q') {

		cout << endl;
		cout << nonProfEmp.getName() << ", Employee ID: " << nonProfEmp.getID() << endl;
		cout << "What about this employee would you like to know?" << endl;
		cout << "(a) input number of hours worked" << endl;
		cout << "(b) Weekly Salary" << endl;
		cout << "(c) Health Care Contributions" << endl;
		cout << "(d) Number of Vacation Days" << endl;
		cout << "(e) Exit employee" << endl;

		cout << "Enter a,b,c, d, e : ";

		cin >> userChoice;
		cout << endl;

		if (userChoice != 'a' && userChoice != 'b' && userChoice != 'c' && userChoice != 'd' && userChoice != 'e') {
			cout << "Invalid input, please try again." << endl;

			continue;
		}

		switch (userChoice) {

		case 'a':
			cout << "How many hours would you like to input? : ";
			int hours;
			cin >> hours;

			nonProfEmp.setHoursWorked(hours);

			cout << "Hours worked has been updated to " << nonProfEmp.gethoursWorked() << endl;
			cout << endl;

			break;

		case 'b':
			cout << nonProfEmp.getName() << "'s weekly salary is $" << nonProfEmp.calcWeeklySalary() << endl;
			cout << endl;

			break;

		case 'c':
			cout << nonProfEmp.getName() << "'s current contribution to health care is $" << nonProfEmp.calcHealthCare() << endl;
			cout << endl;

			break;

		case'd':
			cout << "How many vacation days have been used? : ";
			int daysUsed;
			cin >> daysUsed;
			cout << nonProfEmp.getName() << "'s current number of available vacation days is " << nonProfEmp.calcVacationDays(daysUsed) << endl;
			cout << endl;

			break;

		case 'e':
			userChoice = 'q';

			break;

		}

	}
}

void addProfessional(vector<Professional>& profEmps) {

	cout << "What is the name of the employee? : ";
	string empName;
	cin >> empName;
	cout << endl;

	cout << "What is this employee's ID number? : ";
	int empID;
	cin >> empID;
	cout << endl;

	cout << "What is this employee's salary? : ";
	int salary;
	cin >> salary;
	cout << endl;

	cout << "How many vacation days is this employee allotted? : ";
	int vacationDays;
	cin >> vacationDays;
	cout << endl;

	Professional profEmployee(salary, vacationDays, empName, empID);

	profEmps.push_back(profEmployee);
}

void addNonProfessional(vector<NonProfessional>& nonProfEmps) {

	cout << "What is the name of the employee? : ";
	string empName;
	cin >> empName;
	cout << endl;

	cout << "What is this employee's ID number? : ";
	int empID;
	cin >> empID;
	cout << endl;

	cout << "What is this employee's hourly wage? : ";
	int wage;
	cin >> wage;
	cout << endl;

	NonProfessional nonProfEmployee(wage, empName, empID);

	nonProfEmps.push_back(nonProfEmployee);


}


