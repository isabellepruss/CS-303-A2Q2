#pragma once
#include<iostream>
#include <string>
#include<vector>

using namespace std;

char askForType();

char askForType2();

Professional searchProfessionals(vector<Professional> employees, string name);

NonProfessional searchNonProfs(vector<NonProfessional> employees, string name);

void whatYouWantProfs(Professional profEmp);

void whatYouWantNonProfs(NonProfessional nonProfEmp);

void addProfessional(vector<Professional>& profEmps);

void addNonProfessional(vector<NonProfessional>& nonProfEmps);


