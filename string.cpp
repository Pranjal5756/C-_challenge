#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
    // string is a colloction of characters and group characters

    // string myString = "hello";

    // cout << typeid(myString).name();
    // return 0;

    // to concatenate strings we can do it like below, first of all we can use a method called append()

    // see

    // string firstname  = "pranjal";
    // string lastname ="pratik";
    // // string fullname = firstname + lastname;
    // cout << firstname + " " + lastname << endl;
    // cout << firstname.append(lastname);

    // to find the lenght of string we code like this

    // string text = "slkjfeiosjejtr etgkjdg";
    // cout << text.length();

    // to access the string we code like this

    // string myString = "rupa";
    // myString[0] = 'p';
    // cout << myString[0] << endl;
    // cout << myString;

    // Strings - Special Character

    // there are many special character provided by cpp such as
    //     (Escape character)	(Result)	(Description)
    //              \'	            '	      Single quote
    //              \"	            "	        Double quote
    //              \\	            \	        Backslash
    //              \n            New Line
    //              \t            tab

    string txt = "We are the so-called \"Vikings\" from the north.";
    cout << txt;

    string txt1 = "It\'s alright.";
    cout << txt1;

    string txt2 = "The character \\ is called backslash.";
    cout << txt2;

    string txt3 = "Hello\nWorld!";
    cout << txt3;

    string txt4 = "Hello\tWorld!";
    cout << txt4;
}