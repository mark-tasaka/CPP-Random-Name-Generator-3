#include<iostream>
#include<fstream>
#include <iomanip>
#include<ctime>
#include<cstdlib>
#include<string>
#include "Generator.h"
using namespace std;

/*
* C++ Random Name Generator version 3
* designed by Mark Tasaka 2023
*/


int main()
{
	srand(time(0));
	int firstNameCode = rand() %50 +1;
	int lastNameCode = rand() %38 +1;
	int count = 0;
	char nameGender;
	string nameGender2;
	bool isMale = false;

	Generator test = Generator();

	cout << "Welcome to the Random Name Generator.  The generator has been designed to create a list of randomly generated names." << endl << endl;

	cout << "How many random names would you like to generate?  Please enter an integer." << endl;
	cin >> count;
	cout << endl;

	//checks if integre is entered.
	//if non-integre is entered, re-ask question.
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "An integer was not entered.  Please enter a integer for the number of random names you would like to randomly generate." << endl;
		cin >> count;
		cout << endl;

	}

	cout << "Please enter the Gender of the first name.  Enter M for a Male first name or F for a female first name." << endl;
	//cin.get(nameGender);
	getline(cin, nameGender2);

	/*
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a single character (char)." << endl << endl;
		cin >> count;
		cout << endl;

		cout << "Please enter the Gender of the first name.  Enter M for a Male first name or F for a female first name." << endl;
		cin.get(nameGender);

	}*/

	vector<string> firstName = test.getFirstName(firstNameCode, count, isMale);
	vector<string> lastName = test.getSurname(lastNameCode, count);
	string* nameOrigins = test.getNameOrigins(firstNameCode, lastNameCode);

	for (int i = 0; i < count; i++)
	{
		cout << firstName[i] << " " << lastName[i] << endl;
	}

	cout << endl;
	cout << "First Name Origins: " << nameOrigins[0] << endl;
	cout << "Last Name Origins: " << nameOrigins[1] << endl;


	/*
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
	*/

	return 0;

}