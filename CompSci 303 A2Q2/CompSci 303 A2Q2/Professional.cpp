#include "Employee.h"
#include "Professional.h"

using namespace std;


double Professional::calcWeeklySalary() {
	//calculate weekly salary based on annual salary
	double weeklySalary = annualSalary / 52;

	return weeklySalary;

}


double Professional::calcHealthCare() {

	//call function to calculate weekly salary
	double weeklySalary = calcWeeklySalary(); 

	//calculate health care contributions
	healthCareContribution += (weeklySalary * percentFromPaycheck); 

	return healthCareContribution; //return contribution value
}

//calculates number of remaining vacation days by considering how many have already been used.
int Professional::calcVacationDays(int daysUsed) {

	numVacationDays = numVacationDays - daysUsed; 

	return numVacationDays; //return number of remaining days
}






