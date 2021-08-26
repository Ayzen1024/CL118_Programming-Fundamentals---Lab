#include<iostream>
using namespace std;

void equ(int num);


int main()
{
    int s;                                                               // Declaring a variable.
    cout<<"----------------------------------------------------------------------------------------"<<endl;
    cout<<"Please enter the number: ";
    cin>>s;                                                             //taking the value of "s" from the user
    cout<<"----------------------------------------------------------------------------------------"<<endl;
    equ(s);                                                             //calling the function
    cout<<"-------------------------------------The End--------------------------------------------"<<endl;
    return 0;
}

void equ(int num)
{
    int a=1;
    int r;
    int b=num;
    while (a<num)
    {
        b--;            //subtracting -1 form the value of "b" after each alteration
        r=a+b;          //checking wheather our answer is right or not
        cout<<a<<" + "<<b<<" = "<<r<<endl;
        a++;            //adding +1 in the value of "a" after each alteration
    }
    
}