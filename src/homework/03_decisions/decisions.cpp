//write include statement for decisions header
#include "decisions.h"
#include <iostream>

using std::cout; using std::cin;

//Write code for function(s) code here
void GradeConvert(int num)
{
    char grade = 'W';
    if (num > 89){
        grade = 'A';
    }
    else if (num > 79){
        grade = 'B';
    }
    else if (num > 69){
        grade = 'C';
    }
    else if (num > 59){
        grade = 'D';
    }
    else{
        grade = 'F';
    }

    switch (grade)
    {
        case 'A':
        cout << "You got an A";
        break;
        case 'B':
        cout << "You got a B";
        break;
        case 'C':
        cout << "You got a C";
        break;
        case 'D':
        cout << "You got a D";
        break;
        default:
        cout << "You got an F";
        break;
    }
}