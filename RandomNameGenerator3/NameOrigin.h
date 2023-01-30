#ifndef NAME_ORIGIN_H
#define NAME_ORIGIN_H
#include<iostream>
#include<string>
using namespace std;

class NameOrigin
{
public:
	string getFirstNameOrigins(int code);
	string getSurnameOrigins(int code);

private:
	string firstNameOrigins;
	string surnameOrigins;
};

#endif // ! NAME_ORIGIN_H
