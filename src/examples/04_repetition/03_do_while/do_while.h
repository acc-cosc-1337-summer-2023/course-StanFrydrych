#include "do_while.h"

using std::cout; using std::cin;
//Write void function protype named prompt_user with no parameters
void prompt_user()
{
    auto choice = "n";

    do
    {
        cout<<"continue to y: ";
        cin>>choice;
        
    } while (choice == 'y' || choice == "Y");
    
}


//Write void function protype named run_menu with no parameters

