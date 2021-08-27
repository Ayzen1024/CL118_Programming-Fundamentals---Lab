#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int half = number/2;
    bool flag = true;
    if( number == 0 || number == 1 )
    {
        cout<<"Not a prime number"<<endl;
    }
    else
    {
        for(int n = 2; n <= half; n++)
        {
            if(number % n==0)
            {
                cout<<"Number is not a prime number!"<<endl;
                flag = false;
                break;
            }
            else
            {
                continue;
            }
        }
        if(flag == true)
        {
            cout<<"Given number is prime number!"<<endl;
        }
        else
        {
            cout<<"Not a prime number"<<endl;
        }
    }
    return 0;
}