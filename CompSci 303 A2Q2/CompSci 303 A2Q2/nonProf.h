#pragma once

#pragma once
#include "Employee.h"

using namespace std;

class NonProfessional : public Employee {

private:
	int weeklySalary;
	double percentFromPaycheck = 0.05;
	double healthCareContribution = 0;
	double numHoursWorked;
	int hourlyWage = 25;
	int numVacationDays;


public:
	int numProf = 0; //number of professional employees

	//constructors
	//default constructor

	NonProfessional() : Employee() {

		weeklySalary = 0;
		numHoursWorked = 0;
		numVacationDays = 0;

	}

	NonProfessional(int wage, string n, int id)
		: Employee(n, id, "Nonprofessional") {

		hourlyWage = wage;
		numHoursWorked = 0;
		numHoursWorked = 0;
		numVacationDays = 0;

	}

	//setters
	void setHoursWorked(int hours);

	//getters
	double gethoursWorked();

	//methods
	double calcWeeklySalary();
	double calcHealthCare();
	int calcVacationDays(int daysUsed);

};