#include<iostream>
#include<fstream>
#include <iomanip>
#include<ctime>
#include<cstdlib>

#include "MaleName.h"
#include "FemaleName.h"
#include "Surname.h"
#include "NameOrigin.h"

using namespace std;


int main()
{
	srand(time(0));

	int select = 1;
	int selectSurname = 2;
	int count = 30;

	MaleName test1 = MaleName();
	vector<string> firstName = test1.getFirstName(select, count);

	FemaleName test2 = FemaleName();
	vector<string> firstNameFemale = test2.getFirstName(select, count);

	Surname test3 = Surname();
	vector<string> lastName = test3.getSurnames(selectSurname, count);

	NameOrigin test4 = NameOrigin();
	string lastNameOrigins = test4.getSurnameOrigins(selectSurname);
	string firstNameOrigins = test4.getFirstNameOrigins(select);

	cout << "Welcome to the Random Name Generator.  The generator has been designed to create a list of randomly generated names." << endl << endl;

	cout << "Male First Names:" << endl;

	for (int i = 0; i < count; i++)
	{
		cout << "\t" << firstName[i] << " " << lastName[i] << endl;
	}

	cout << "First Name Origins: " << firstNameOrigins << endl;
	cout << "Last Name Origins: " << lastNameOrigins << endl;

	cout << endl;
	cout << "Female First Names:" << endl;

	for (int i = 0; i < count; i++)
	{
		cout << "\t" << firstNameFemale[i] << " " << lastName[i] << endl;
	}

	cout << "First Name Origins: " << firstNameOrigins << endl;
	cout << "Last Name Origins: " << lastNameOrigins << endl;

	return 0;

}