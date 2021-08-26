#include<iostream>

using namespace std;

void num_1();
void num_2();
void num_3();
void num_4();

int main()
{
    cout<<endl;
    cout<<"----------------Part (a)-------------"<<endl<<endl;
    num_1();                                                        //calling the num_1 function
    cout<<"----------------Part (b)-------------"<<endl<<endl;
    num_2();                                                        //calling the num_2 function
    cout<<"----------------Part (c)-------------"<<endl<<endl;
    num_3();                                                        //calling the num_3 function
    cout<<"----------------Part (d)-------------"<<endl<<endl;
    num_4();                                                        //calling the num_4 function
    cout<<"----------------The End--------------"<<endl<<endl;

}
void num_1()
{
    int i,j;
    for (i = 1; i <=10; i++)    //repetition of columns (i)
    {
        for (j = 1; j <=i; j++) //repetition of rows (j)
        {
           cout<<"*"; 
        }
        cout<<endl;           
        
    }

}
void num_2()
{
    int i,j;
    for (i = 1; i <=10; i++)    //repetition of columns (i)
    {
        j=i;
        while (j<=10)           //repetition of rows (j)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
                   
        
    }
}
void num_3()
{
    int i,j,s;
    for (i = 10; i >=1; i--)        //repetition of columns (i)
    {
        for (s = 1; s <=10-i; s++)  //repetition of spaces (s)
            cout<<" ";
        for ( j = 1; j <= i; j++)   //repetition of rows (j)
            cout<<"*";
        cout<<endl;
    }
}
void num_4()
{
    int i,j,s;
    for (i = 1; i <=10; i++)        //repetition of columns (i)
    {
        for (s = 1; s <=10-i; s++)  //repetition of spaces (s)
            cout<<" ";
        for ( j = 1; j <= i; j++)   //repetition of rows (j)
            cout<<"*";
        cout<<endl;
    }
}