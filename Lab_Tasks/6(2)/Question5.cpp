#include <iostream>
#include <string>
using namespace std;

void first_program(char asterisk,int number)
{
    cout<<"Patter A"<<endl;
    for(int i = 0;i < number;i++)
    {
        for(int j = 0; j < i;j++)
        {
            cout<<asterisk;            
        }
        cout<<'\n';
    }
    cout<<'\n';
}
////////////////////////////////////////////
void second_program(char asterisk,int number)
{
    cout<<"Patter B"<<endl;
    for(int i = 0;i < number;i++)
    {
        for(int j = number; j > i;j--)
        {
            cout<<asterisk;            
        }
        cout<<'\n';
    }
    cout<<'\n';
}
////////////////////////////////////////////
void third_program(char asterisk,int number)
{
    cout<<"Patter C"<<endl;
    for(int i = number;i > 0;i--)
    {
        for(int k = 0; k < number-i;k++)
        {
            cout<<" ";
        }
        for(int j = 0; j < i;j++)
        {
                cout<<asterisk;            
        }
        cout<<'\n';
    }
}
////////////////////////////////////////////
void fourth_program(char asterisk,int number)
{
    cout<<"Patter D"<<endl;
    for(int i = 1;i <= number;i++)
    {
        for(int k = 0; k < number-i;k++)
        {
            cout<<" ";
        }
        for(int j = 0; j < i;j++)
        {
                cout<<asterisk;            
        }
        cout<<'\n';
    }
}
////////////////////////////////////////////
int main()
{
    char asterisk = '*';
    int number = 10;
    first_program(asterisk,number);
    second_program(asterisk,number);
    third_program(asterisk,number);
    fourth_program(asterisk,number);
    return 0;
}