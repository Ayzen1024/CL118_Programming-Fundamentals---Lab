#include <iostream>
#include <string>
using namespace std;


int main()
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    int count = 0;
    if(number>0 && number <=1000)
    {
        for(int i = 1;i<number;i++)
        {
            if(number % i == 0)
            {
                cout<<count<<" + "<< i <<  " = ";
                count += i;
                cout<<count<<endl;        
            }
        }
        if(number == count)
        {
            cout<<number<<" is a perfect number"<<endl;
        }
        else
        {
            cout<<number<<" is not a perfect number"<<endl;

        }
    }
    else
    {
        cout<<"Enter a number between 1 and 1000"<<endl;
    }
}