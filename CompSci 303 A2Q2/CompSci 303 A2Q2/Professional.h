#pragma once
#include "Employee.h"

using namespace std;

class Professional : public Employee {

private:
	int annualSalary;
	double percentFromPaycheck = 0.1;
	double healthCareContribution = 0;
	int numVacationDays;


public:
	int numProf = 0; //number of professional employees

	//constructors
	//default constructor

	Professional() : Employee() {

		annualSalary = 0;
		numVacationDays = 0;

	}

	Professional(int salary, int vacation, string n, int id)
		: Employee(n, id, "Professional") {

		annualSalary = salary;
		numVacationDays = vacation;

	}

	//methods
	double calcWeeklySalary();
	double calcHealthCare();
	int calcVacationDays(int daysUsed);

};