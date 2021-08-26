#include<iostream>
#include<math.h>
using namespace std;

double abc(double a,double b,double c);

int main()
{
    double a,b,c,ans;       // Declaring a variable.
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<"Enter the value of a: ";
    cin>>a;                             //taking the value of "a" form user
    cout<<"Enter the value of b: ";
    cin>>b;                             //taking the value of "b" form user
    cout<<"Enter the value of c: ";
    cin>>c;                             //taking the value of "c" form user
    cout<<"The result of (a*b)^c is: ";
    ans=abc(a,b,c);                     //calling the function
    cout<<ans<<endl;
    cout<<"-------------------------------------------The End-------------------------------------------"<<endl;
    return 0;
}
double abc(double a,double b,double c)
{
    double x,y,t,ans;

    t=a*b;
    ans=pow(t,c);       //using the power function
    
    return ans;
}