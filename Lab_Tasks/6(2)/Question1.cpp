#include <iostream>
#include <string>
using namespace std;

int check_vowels(string stng)
{
    int a=0;
    int e=0;
    int i=0;
    int o=0;
    int u=0;
    
	cout<<"Length of string: "<<stng.length()<<endl;
    for(int count = 0;count<stng.length();count++)
    {	
    	if (stng[count] == 'a')
        {
            a++;
        }
        else if (stng[count] == 'e')
        {
            e++;
        }
        else if (stng[count] == 'i')
        {
            i++;
        }
        else if (stng[count] == 'o')
        {
            o++;
        }
        else if (stng[count] == 'u')
        {
            u++;
        }
    }
    cout<<"a appeared: "<<a<<" times"<<endl;
    cout<<"e appeared: "<<e<<" times"<<endl;
    cout<<"i appeared: "<<i<<" times"<<endl;
    cout<<"o appeared: "<<o<<" times"<<endl;
    cout<<"u appeared: "<<u<<" times"<<endl;
}

int main()
{	
    string stng;
    cout<<"Enter a String: ";
    cin>>stng;
	check_vowels(stng);
	return 0;
}
