#include <iostream>
#include <string>
using namespace std;


int main()
{
    long int number;
    int even=0;
    int odd=0;
    int zeros=0;
    cout<<"Enter the long integer: ";
    cin>>number;
    while(number > 0)
    {
        int last_digit = number % 10;
        if (last_digit % 2 == 0)
        {
            even++;
        }
        else if (last_digit == 0)
        {
            zeros++;
        }
        else if (last_digit % 2 != 0)
        {
            odd++;
        }
        number = number/10;
    }
    cout<<"Even number of digits are: "<<even<<endl;
    cout<<"Odd number of digits are: "<<odd<<endl;
    cout<<"Number of 0s are: "<<zeros<<endl;
    return 0;
}