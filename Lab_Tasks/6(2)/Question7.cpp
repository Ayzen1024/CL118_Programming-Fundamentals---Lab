#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    ////////////
    cout<<"Enter three numbers!"<<endl;
    ////////////
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter  second number: ";
    cin>>num2;
    cout<<"Enter third number: ";
    cin>>num3;

    cout<<num1<<num2<<num3<<endl;
    cout<<num3<<num2<<num1<<endl;
}