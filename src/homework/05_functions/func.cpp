//add include statements
#include "func.h"
#include<vector>

using std::vector;
using std::size;

//add function code here
int get_vector_max_value(vector<int> vec)
{
    int value = 0;

    for(int i = 0; i <= vec.size(); i++)
    {
        if (value < vec[i])
        {
            value = vec[i];
        }
    }

    return value;
}

vector<int> get_square_of_each_element(vector<int> vec)
{
    for(int i = 0; i<= vec.size(); i++)
    {
        vec[i] = vec[i]^2;
    }
    
    return vec;
}