#include<iostream>
using namespace std;
void abc();
int main()

{
    abc(); //calling the function
    return 0;
}

void abc()      // defining a function
{
    int a[3];
    cout<<"Enter three numbers: "<<endl;
    for (int  i = 0; i < 3; i++)
    {
       cin>>a[i];

    }
    cout<<"Your number forward: "; //displaying the result in forward form
    for (int j = 0; j < 3; j++)
    {
        cout<<a[j];

    }
    cout<<endl; 
    cout<<"Your number reversed: ";     //displaying the result in reversed form
    for (int k = 2; k >=0; k--)
    {
        cout<<a[k];

    }
    cout<<endl; 

}