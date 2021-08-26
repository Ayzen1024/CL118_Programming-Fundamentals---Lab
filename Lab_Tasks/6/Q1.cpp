#include<iostream>
using namespace std;
void string_reader(string str);
void test(string str);

int main ()
{
    string a;           // declaring a variable
    cout<<"Enter the String "<<endl;
    cin>>a;             
    int stringlength=a.length();        //checking the length
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<"Your entered string is ";
    cout<<a<<endl;
    cout<<"Length of the string is: "<<stringlength<<endl;

    string_reader(a);           //calling the function
    cout<<"Testing Program....."<<endl;
    test(a);                    //calling the function
    return 0;
}

void string_reader(string str)
{
    int lowercase_vowels=0;
    int v1=0;
    int v2=0;
    int v3=0;
    int v4=0;
    int v5=0;
    
    char ch;

    for(int i=0;i<=str.length();i++)
    {
        ch=str[i];

        if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u') //checking 
        {
            lowercase_vowels++;
            if(ch=='a')
            {
                v1++;
                
                
            }
            else if (ch=='e')
            {
                v2++;
               
            }
            else if (ch=='i')
            {
                v3++;
               
            }
            else if (ch=='o')
            {
                v4++;
                
            }
            else if (ch=='u')
            {
                v5++;
            }
            
        }
    }
    cout<<"Lowercase Vowels appears in the string are: "<<lowercase_vowels << endl
    <<"Number of each lowercase vowel appear in the string are given as "<<endl<< "a: "<< v1<<endl<<"e: "<<v2<<endl<<"i: "
    <<v3<<endl<<"o: "<<v4<<endl<<"u: "<<v5<<endl;
    
}

void test(string str)               //testing program
{
    for (int i = 0; i <=str.length()-1; i++)            
    {
        str.at(i);

        if(str.at(i)=='a'|| str.at(i)=='e'||str.at(i)=='i'||str.at(i)=='o'||str.at(i)=='u')     //checking the indexes of each vowel
        
        {
            if(str.at(i)=='a')
            {
                
                cout<<"a at index:"<<i<<endl;                
                
            }
            else if (str.at(i)=='e')
            {
        
                cout<<"e at index:"<<i<<endl;
            }
            else if (str.at(i)=='i')
            {
             
                cout<<"i at index:"<<i<<endl;
            }
            else if (str.at(i)=='o')
            {
               
                cout<<"o at index:"<<i<<endl;
            }
            else if (str.at(i)=='u')
            {
                cout<<"u at index:"<<i<<endl;
            }
            
        }
    }
    
}










