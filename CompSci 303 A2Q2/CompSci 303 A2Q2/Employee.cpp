#include<iostream>
#include<string>
#include "Employee.h"


using namespace std;

//default constructor
Employee::Employee() {
	name = " ";
	empID = 0000;
	type = "none";

}

Employee::Employee(string n, int id, string t) {
	name = n;
	empID = id;
	type = t;

}

//setters
void Employee::setName(string newName) {
	name = newName;
}

void Employee::setID(int newID) {
	empID = newID;
}

void Employee::setType(string newType){
	type = newType;
}

//getters
string Employee::getName() {
	return name;
}

int Employee::getID() {
	return empID;
}

string Employee::getType() {
	return type;
}