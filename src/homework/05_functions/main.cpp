#include <iostream>
#include "func.h"
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main() 
{
	vector<int> vec_a{5,7,-1,99,-100,10};
	vector<int> vec_b{6,1,8,9,4};

	auto option = 0;

	do
	{
		cout<<"Menu Options\n";
		cout<<"1.Max Value \n";
		cout<<"2.Square Elements\n";
		cout<<"3.Exit\n";
		cin>>option;

		switch(option)
		{
			case 1:
			cout<<"Fetching max value...\n";
			get_vector_max_value(vec_a);

			break;
			case 2:
			cout<<"Fetching squared list...\n";
			get_square_of_each_element(vec_b);

			break;

			case 3:
			cout<<"Exiting...";
			break;
		}
	} while (option !=3);


	return 0;
}