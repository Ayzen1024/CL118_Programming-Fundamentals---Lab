#include<iostream>
using namespace std;

void check(char a);

int main()
{   char ch;
    cout<<"----------------------------------------------------------------------------------------"<<endl;
    cout<<"Please enter the Character: ";      
    cin>>ch;        //taking input form the user
    check(ch);      //calling the function
    cout<<"-------------------------------------The End--------------------------------------------"<<endl;
    return 0;
}
void check(char ch)
{
    if (ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')   //comparing 
    {
        cout<<"It is a Vowel. "<<endl;
    }
    else
    {
        cout<<"It is a Consonant."<<endl;
    }
    
}