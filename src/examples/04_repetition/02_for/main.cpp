#include"for.h"

using std::cin; using std::cout;
int main() 
{
	display_numbers(5);
	
	auto num = 0;

	cout<<"enter number: ";
	cin>>num;

	auto result = sum_of_squares_for(int num);

	cout << "result is: " << result

	return 0;
}