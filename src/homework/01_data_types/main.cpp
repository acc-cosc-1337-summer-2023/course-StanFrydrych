//write include statements
#include<iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cin; using std::cout;

int main()
{
	int num;
	int result;
	int num1 = 4;

	cout << "input number for multiplication.\n";
	cin >> num;
	result = multiply_numbers(num);

	cout << result <<" is your result.\n";
	cout << multiply_numbers(num1) << " is the result of 4.";


	return 0;
}
