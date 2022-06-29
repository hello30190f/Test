#include <iostream>
using namespace std;
#include "string.h"

string input()
{
    string output;
    cin >> output;

    return output;
}

int calculate(char op,int sum,int number)
{

    if(op == "+")
    {
        return sum + number;
    }else
    {
        return sum - number;
    }
}

int main()
{
    int sum = 0;
    string input_by_cin = input();
    int len = input_by_cin.size();
    int init_number = input_by_cin.at(0);
    for(int i = 0; i < len; i++)
    {
        if(i == 0)
        {
            char op = input_by_cin.at(1);
            int number = (int)input_by_cin.at(2);
            sum = calculate(op,sum,init_number);
        }else
        {
            char op = input_by_cin.at(i + 2);
            int number = (int)input_by_cin.at(i + 3);
            sum = calculate(op,sum,number);
        }


    }

    cout << sum << endl;
}