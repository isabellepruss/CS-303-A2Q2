#pragma once
#include<string>
#include<iostream>

using namespace std;

class Employee {

protected:
	string name;
	int empID;
	string type;

public:
	//constructors
	Employee(); //default

	Employee(string n, int id, string t); 

	//setters
	void setName(string newName);
	void setID(int newID);
	void setType(string type);

	//getters
	string getName();
	int getID();
	string getType();

	//functions
	virtual double calcWeeklySalary(){

		double placeholder1 = 0.0;
		cout << "I exist but I do nothing";

		return placeholder1;
	}

	virtual double calcHealthCare(){

		double placeholder2 = 0.0;
		cout << "I exist but I do nothing";

		return placeholder2;
	}

	virtual int calcVacationDays(){
		
		int placeholder3 = 0;
		cout << "I exist but i do nothing";

		return placeholder3;
	}

	


};


