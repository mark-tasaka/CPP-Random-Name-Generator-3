#include<iostream>
#include<fstream>
#include <iomanip>
#include<ctime>
#include<cstdlib>
#include<string>
#include<map>
#include "Generator.h"
using namespace std;

/*
* C++ Random Name Generator version 3
* designed by Mark Tasaka 2023
*/

void nameGenerator(int textFileCounter);

int main()
{
	int counter = 1;
	//run program
	nameGenerator(counter);

	return 0;

}


void nameGenerator(int textFileCounter)
{
	srand(time(0));
	int firstNameCode = rand() % 50 + 1;
	int lastNameCode = rand() % 38 + 1;
	int count = 0;
	char nameGender;
	string nameGender2;
	bool isMale = false;
	string nameMessage;
	ofstream textFile;
	int generateTextFile = 0;
	int continueProgram = 0;
	map<string, string> fullName;
	//int textFileCounter;

	do 
	{

		//Smart pointer
		unique_ptr<Generator> test = make_unique<Generator>();

		std::cout << "Welcome to the Random Name Generator.  The generator has been designed to create a list of randomly generated names." << endl << endl;

		std::cout << "How many random names would you like to generate?  Please enter an integer." << endl;
		cin >> count;
		cin.get(); //consume newline
		std::cout << endl;

		//checks if integre is entered.
		//if non-integre is entered, re-ask question.
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(256, '\n');
			std::cout << "An integer was not entered.  Please enter a integer for the number of random names you would like to randomly generate." << endl;
			cin >> count;
			cin.get(); //consume newline
			std::cout << endl;

		}

		std::cout << "Please enter the Gender of the first name.  Enter M for a Male first name or F for a female first name." << endl;
		cin.get(nameGender);
		//getline(cin, nameGender2);

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(256, '\n');
			std::cout << "Please enter a single character (char)." << endl << endl;
			cin >> count;
			std::cout << endl;

			std::cout << "Please enter a Char for the Gender of the first name.  Enter M for a Male first name or F for a female first name." << endl;
			cin.get(nameGender);
		}

		while (nameGender != 'M' && nameGender != 'm' && nameGender != 'F' && nameGender != 'f')
		{
			std::cout << "Please enter M for a Male first name or F for a female first name." << endl;
			cin.get(nameGender);
			std::cout << endl;
		}

		if (nameGender == 'M' || nameGender == 'm')
		{
			isMale = true;
			nameMessage = "(Male first names)";
		}
		else
		{
			nameMessage = "(female first names)";
		}

		std::cout << count << " random names " << nameMessage << ": " << endl << endl;

		vector<string> firstName = test->getFirstName(firstNameCode, count, isMale);
		vector<string> lastName = test->getSurname(lastNameCode, count);
		string* nameOrigins = test->getNameOrigins(firstNameCode, lastNameCode);


		for (int i = 0; i < count; i++)
		{
			fullName.insert({ firstName[i], lastName[i] });
		}

		for (auto it = fullName.begin(); it != fullName.end(); ++it)
		{
			std::cout << it->first << " " << it->second << endl;
		}


		std::cout << endl;
		std::cout << "First Name Origins: " << nameOrigins[0] << endl;
		std::cout << "Last Name Origins: " << nameOrigins[1] << endl;

		std::cout << endl;

		generateTextFile = 0;

		std::cout << "Would you like to create a text file for the random names?  Enter 1 to generate text file, or enter another integer value to end program." << endl;
		cin >> generateTextFile;
		cin.get();

		while (!cin.good())
		{
			cin.clear();
			cin.ignore();

			std::cout << "Please enter an integer value" << endl;
		}

		if (generateTextFile == 1)
		{
			string textFileName1 = "randomNames_";
			string version = to_string(textFileCounter);
			string textTail = ".txt";
			string fileName = textFileName1 + version + textTail;
			
			textFile.open(fileName);

			textFileCounter+= 1;

			textFile << "Random Names: " << count << " random names " << endl << endl;

			for (auto it = fullName.begin(); it != fullName.end(); ++it)
			{
				textFile << it->first << " " << it->second << endl;
			}


			textFile << endl;
			textFile << "First Name Origins: " << nameOrigins[0] << endl;
			textFile << "Last Name Origins: " << nameOrigins[1] << endl;

			std::cout << "Random name file has been created." << endl << endl;
		}

		generateTextFile = 0;

		std::cout << "Do you wish to generator more random names?  Press 1 to generate more random names, or press another integer to quit." << endl;

		cin >> continueProgram;
		cin.get();

		while (!cin.good())
		{
			cin.clear();
			cin.ignore();

			std::cout << "Please enter an integer value" << endl;
		}


	} while (continueProgram == 1);

	std::cout << endl;
	std::cout << "Thank You for using the Random Name Generator program." << endl;
}