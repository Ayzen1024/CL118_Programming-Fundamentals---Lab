#include <iostream>
#include <string>
using namespace std;


int main()
{
    int day , month , year;
    int number_day;
    cout<<"Enter the data in mm-dd-yyyy format: "<<endl;
    cout<<"Enter month: ";
    cin>>month;
    cout<<"Enter day: ";
    cin>>day;
    cout<<"Enter year: ";
    cin>>year;
    cout<<"The data is: "<<day<<"-"<<month<<"-"<<year<<endl;
    
    if (month >= 1 && month < 13)
    {   
        if(day >= 1 && day < 32)
        {
            while (month < 13 && month > 1)
            {
                if (month == 2)
                {
                    number_day += 28;
                    //checking leap year
                    if(((year % 4 == 0) && (year % 100 != 0)) || ((year % 400 == 0) && (year % 100 == 0)))
                    {
                        cout<<"Leap year!"<<endl;
                        number_day++;
                    }
                }
                else if ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
                {
                    number_day += 31;
                }
                else if (month == 4 || month == 6 || month == 9 || month == 11)
                {
                    number_day += 30;
                }
                month--;
            }
            number_day += day;
            cout<<"Day Number of the year: "<<number_day<<endl;
        }
        else
        {
            cout<<"Enter Correct day!!"<<endl;
        } 
    } 
    else
    {
        cout<<"cout enter correct month!!";
    }

    return 0;
}