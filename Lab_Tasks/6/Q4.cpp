#include<iostream>
using namespace std;
int main()
{
    int i,num,mid,sum=0; // declaring a variable.
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"Enter the Number: ";

    cin>>num;

    mid =num/2;

    for (i = 1; i <=mid; i++) 
    {
        if ((num%i)==0)  //Checking if num is equal to zero or not
        {
            sum+=i;
        }
    }
    if (sum==num)
    {
        
        for (i = 1; i <=mid; i++)
        {
            if (num%i==0)
            {
                if (i<mid)
            {
                cout<<i<<" + ";
            }
            else
            {
                cout<<i<<" = "<<num<<endl; //printing the number
            }
            }
            
        }
        
        
        cout<<"It is a Perfect Number. "<<endl;
        cout<<"-------------------------The End-----------------------"<<endl;
    }
    else
    {
        cout<<"It is not a Perfect Number. "<<endl;
        cout<<"-------------------------The End-----------------------"<<endl;
    } 
    return 0;
}
