#include<iostream>
#include<string>
#include "NameOrigin.h"
using namespace std;


string NameOrigin::getFirstNameOrigins(int select)
{

    if (select == 1)
    {
        this->firstNameOrigins = "African";
    }
    else if (select == 2)
    {
        this->firstNameOrigins = "African American";
    }
    else if (select == 3)
    {
        this->firstNameOrigins = "American";
    }
    else if (select == 4)
    {
        this->firstNameOrigins = "Arabic";
    }
    else if (select == 5)
    {
        this->firstNameOrigins = "Armenian";
    }
    else if (select == 6)
    {
        this->firstNameOrigins = "Celtic";
    }
    else if (select == 7)
    {
        this->firstNameOrigins = "Chinese";
    }
    else if (select == 8)
    {
        this->firstNameOrigins = "Czechoslovakian";
    }
    else if (select == 9)
    {
        this->firstNameOrigins = "Danish";
    }
    else if (select == 10)
    {
        this->firstNameOrigins = "Dutch";
    }
    else if (select == 11)
    {
        this->firstNameOrigins = "Egyptian";
    }
    else if (select == 12)
    {
        this->firstNameOrigins = "English";
    }
    else if (select == 13)
    {
        this->firstNameOrigins = "Finnish";
    }
    else if (select == 14)
    {
        this->firstNameOrigins = "French";
    }
    else if (select == 15)
    {
        this->firstNameOrigins = "Gaelic";
    }
    else if (select == 16)
    {
        this->firstNameOrigins = "German";
    }
    else if (select == 17)
    {
        this->firstNameOrigins = "Greek";
    }
    else if (select == 18)
    {
        this->firstNameOrigins = "Hawaiian";
    }
    else if (select == 19)
    {
        this->firstNameOrigins = "Hebrew";
    }
    else if (select == 20)
    {
        this->firstNameOrigins = "Hindi";
    }
    else if (select == 21)
    {
        this->firstNameOrigins = "Hungarian";
    }
    else if (select == 22)
    {
        this->firstNameOrigins = "Indian";
    }
    else if (select == 23)
    {
        this->firstNameOrigins = "Irish";
    }
    else if (select == 24)
    {
        this->firstNameOrigins = "Italian";
    }
    else if (select == 25)
    {
        this->firstNameOrigins = "Japanese";
    }
    else if (select == 26)
    {
        this->firstNameOrigins = "Korean";
    }
    else if (select == 27)
    {
        this->firstNameOrigins = "Latin";
    }
    else if (select == 28)
    {
        this->firstNameOrigins = "Middle English";
    }
    else if (select == 29)
    {
        this->firstNameOrigins = "Native American";
    }
    else if (select == 30)
    {
        this->firstNameOrigins = "Norse";
    }
    else if (select == 31)
    {
        this->firstNameOrigins = "Old English";
    }
    else if (select == 32)
    {
        this->firstNameOrigins = "Old French";
    }
    else if (select == 33)
    {
        this->firstNameOrigins = "Old German";
    }
    else if (select == 34)
    {
        this->firstNameOrigins = "Old Norse";
    }
    else if (select == 35)
    {
        this->firstNameOrigins = "Persian";
    }
    else if (select == 36)
    {
        this->firstNameOrigins = "Polish";
    }
    else if (select == 37)
    {
        this->firstNameOrigins = "Polynesian";
    }
    else if (select == 38)
    {
        this->firstNameOrigins = "Russian";
    }
    else if (select == 39)
    {
        this->firstNameOrigins = "Sanskrit";
    }
    else if (select == 40)
    {
        this->firstNameOrigins = "Scandinavian";
    }
    else if (select == 41)
    {
        this->firstNameOrigins = "Scottish";
    }
    else if (select == 42)
    {
        this->firstNameOrigins = "Slavic";
    }
    else if (select == 43)
    {
        this->firstNameOrigins = "Spanish";
    }
    else if (select == 44)
    {
        this->firstNameOrigins = "Swahili";
    }
    else if (select == 45)
    {
        this->firstNameOrigins = "Swedish";
    }
    else if (select == 46)
    {
        this->firstNameOrigins = "Teutonic";
    }
    else if (select == 47)
    {
        this->firstNameOrigins = "Turkish";
    }
    else if (select == 48)
    {
        this->firstNameOrigins = "Vietnamese";
    }
    else if (select == 49)
    {
        this->firstNameOrigins = "Welsh";
    }
    else if (select == 50)
    {
        this->firstNameOrigins = "Yiddish";
    }

    return firstNameOrigins;

}

string NameOrigin::getSurnameOrigins(int code)
{
    if (code == 1)
    {
        this->surnameOrigins = "African";
    }
    else if (code == 2)
    {
        this->surnameOrigins = "Arabic";
    }
    else if (code == 3)
    {
        this->surnameOrigins = "Armenian";
    }
    else if (code == 4)
    {
        this->surnameOrigins = "Catalan";
    }
    else if (code == 5)
    {
        this->surnameOrigins = "Chinese";
    }
    else if (code == 6)
    {
        this->surnameOrigins = "Cornish";
    }
    else if (code == 7)
    {
        this->surnameOrigins = "Czech";
    }
    else if (code == 8)
    {
        this->surnameOrigins = "Danish";
    }
    else if (code == 9)
    {
        this->surnameOrigins = "Dutch";
    }
    else if (code == 10)
    {
        this->surnameOrigins = "English";
    }
    else if (code == 11)
    {
        this->surnameOrigins = "Finnish";
    }
    else if (code == 12)
    {
        this->surnameOrigins = "French";
    }
    else if (code == 13)
    {
        this->surnameOrigins = "Galician";
    }
    else if (code == 14)
    {
        this->surnameOrigins = "German";
    }
    else if (code == 15)
    {
        this->surnameOrigins = "Greek";
    }
    else if (code == 16)
    {
        this->surnameOrigins = "Hungarian";
    }
    else if (code == 17)
    {
        this->surnameOrigins = "Indian";
    }
    else if (code == 18)
    {
        this->surnameOrigins = "Irish";
    }
    else if (code == 19)
    {
        this->surnameOrigins = "Italian";
    }
    else if (code == 20)
    {
        this->surnameOrigins = "Japanese";
    }
    else if (code == 21)
    {
        this->surnameOrigins = "Jewish";
    }
    else if (code == 22)
    {
        this->surnameOrigins = "Korean";
    }
    else if (code == 23)
    {
        this->surnameOrigins = "Lithuanian";
    }
    else if (code == 24)
    {
        this->surnameOrigins = "Muslim";
    }
    else if (code == 25)
    {
        this->surnameOrigins = "Norwegian";
    }
    else if (code == 26)
    {
        this->surnameOrigins = "Polish";
    }
    else if (code == 27)
    {
        this->surnameOrigins = "Portuguese";
    }
    else if (code == 28)
    {
        this->surnameOrigins = "Russian";
    }
    else if (code == 29)
    {
        this->surnameOrigins = "Scandinavian";
    }
    else if (code == 30)
    {
        this->surnameOrigins = "Scottish";
    }
    else if (code == 31)
    {
        this->surnameOrigins = "Slavic";
    }
    else if (code == 32)
    {
        this->surnameOrigins = "Spanish";
    }
    else if (code == 33)
    {
        this->surnameOrigins = "Swedish";
    }
    else if (code == 34)
    {
        this->surnameOrigins = "Swiss";
    }
    else if (code == 35)
    {
        this->surnameOrigins = "Turkish";
    }
    else if (code == 36)
    {
        this->surnameOrigins = "Ukranian";
    }
    else if (code == 37)
    {
        this->surnameOrigins = "Vietnamese";
    }
    else if (code == 38)
    {
        this->surnameOrigins = "Welsh";
    }

    return surnameOrigins;
}