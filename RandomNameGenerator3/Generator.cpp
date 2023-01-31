#include <iostream>
#include <vector>
#include <string>
#include "MaleName.h"
#include "FemaleName.h"
#include "Surname.h"
#include "NameOrigin.h"
#include "Generator.h"
using namespace std;

vector<string> Generator::getFirstName(int code, int count, bool isMale)
{
	if (isMale == true)
	{
		MaleName maleName = MaleName();

		firstName = maleName.getFirstName(code, count);
	}
	else
	{
		FemaleName femaleName = FemaleName();

		firstName = femaleName.getFirstName(code, count);
	}

	return firstName;
}

vector<string> Generator::getSurname(int code, int count)
{
	Surname theSurname = Surname();
	surname = theSurname.getSurnames(code, count);
	return surname;
}

string* Generator::getNameOrigins(int codeFirstName, int codeLastName)
{
	NameOrigin origins = NameOrigin();
	string firstName = origins.getFirstNameOrigins(codeFirstName);
	nameOrigins[0] = firstName;
	string lastName = origins.getSurnameOrigins(codeLastName);
	nameOrigins[1] = lastName;

	return nameOrigins;
}
