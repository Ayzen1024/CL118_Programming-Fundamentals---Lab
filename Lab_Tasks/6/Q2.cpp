#include<iostream>
#include<string>

using namespace std;

static char daytab[2][13]={ {0,31,28,31,30,31,30,31,31,30,31,30,31} , {0,31,29,31,30,31,30,31,31,30,31,30,31} };

int days(int month,int day,int year);

int main(void)
{

    int day=0;          // declaring a variable
    int month=0;        // declaring a variable
    int year=0;         // declaring a variable

    cout<<"Enter the Month: ";
    cin>>month;         //taking the value of "month" form user
    
    cout<<"Enter the Day: ";
    cin>>day;           //taking the value of "day" form user
    
    cout<<"Enter the Year: ";
    cin>>year;          //taking the value of "year" form user
    cout<<"The date you enter is "<<month<<"-"<<day<<"-"<<year<<"."<<endl;
    

    day=days(month,day,year);

    return 0;
}

int days(int month,int day,int year)                 // defining a function
{
    int i,leap;

    leap = year % 4 == 0 && year%100 != 0 || year%400 == 0; //checking the leap year wheather it is or not and returning the result in bool
    
    for(i=1 ; i < month ; i++)

        day += daytab[leap][i];
        cout<<"Number of days in the Year = "<<day<<endl;           //calling the function
    if (leap==1)
    {
        cout<<year<<" is a leap year. "<<endl;
        cout<<"------------------------------The End-----------------------------"<<endl;
    }
    else
    {
        cout<<year<<" is not a leap year. "<<endl;
        cout<<"------------------------------The End-----------------------------"<<endl;
    }
    return day;
}