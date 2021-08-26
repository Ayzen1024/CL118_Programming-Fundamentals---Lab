#include<iostream>
using namespace std;

void prime(int num);

int main()
{
    int a;                                              // Declaring a variable.
    cout<<"----------------------------------------------------------------------------------------"<<endl;
    cout<<"Please enter the number: ";
    cin>>a;                                             //taking the value of "a" form user
    prime(a);                                           //calling the function
    cout<<"-------------------------------------The End--------------------------------------------"<<endl;
    return 0;
}
void prime(int num)
{   
    int count=0;
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)                                   //Checking if remainder is equal to zero or not
        {
            count+=1;
        }
        
    }
    if (count>2)                                        //Checking if count is greater than zero or not
    {
        cout<<"It is not a Prime Number. "<<endl;
    }
    else
    {
        cout<<"It is a Prime Number. "<<endl; 
    }   
}