#include <iostream>
#include <math.h>
using namespace std;
//////////////////
float fucntion(float a, float b, float c)
{
    float result;
    result = a * b;
    result = pow(result,c);
    return result;
}
////////////////
int main()
{
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;
    float result;
    cout<<"Enter a: ";
    cin>>num1;
    cout<<"Enter  b: ";
    cin>>num2;
    cout<<"Enter c: ";
    cin>>num3;
    result = fucntion(num1,num2,num3);
    cout<<"Result of a multiply b to the power c: "<<result<<endl;
    return 0;
}