#ifndef GENERATOR_H
#define GENERATOR_H
#include <iostream>
#include <vector>
#include <string>
#include "MaleName.h"
#include "FemaleName.h"
#include "Surname.h"
#include "NameOrigin.h"
using namespace std;

class Generator {
public:
	vector<string> getFirstName(int code, int count, bool isMale);
	vector<string> getSurname(int code, int count);
	string* getNameOrigins(int codeFirstName, int codeLastName);

private:
	vector<string> firstName;
	vector<string> surname;
	string nameOrigins[2];
};

#endif // !GENERATOR_H

