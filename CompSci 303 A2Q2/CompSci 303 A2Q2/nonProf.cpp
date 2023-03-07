#include "Employee.h"
#include"nonProf.h"

using namespace std;

void NonProfessional::setHoursWorked(int hours) {
	numHoursWorked = hours;
}

double NonProfessional::gethoursWorked() {
	return numHoursWorked;
}


double NonProfessional::calcWeeklySalary() {
	weeklySalary = numHoursWorked * hourlyWage;

	return weeklySalary;

}


double NonProfessional::calcHealthCare() {
	healthCareContribution = weeklySalary * percentFromPaycheck;

	return healthCareContribution;
}


int NonProfessional::calcVacationDays(int daysUsed) {
	int  numVacationDays = (numHoursWorked * .01) - daysUsed; //must work 100 hours to get 1 vacation day

	return numVacationDays;
}