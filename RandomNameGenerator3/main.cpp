#include<iostream>
#include<fstream>
#include <iomanip>
#include<ctime>
#include<cstdlib>

#include "MaleName.h"

using namespace std;


int main()
{
	srand(time(0));

	int select = 5;
	int count = 80;

	MaleName test1 = MaleName();
	vector<string> firstName = test1.getFirstName(select, count);

	cout << "Welcome to the Random Name Generator.  The generator has been designed to creat a list of randomly generated names." << endl << endl;

	for (int i = 0; i < count; i++)
	{
		cout << firstName[i] << endl;
	}


	return 0;

}