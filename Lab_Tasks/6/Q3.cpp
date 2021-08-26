#include <iostream> 
using namespace std; 

void count(long  num);

int main() 
{ 
    long  num;              // declaring a variable
    cout<<"Enter an Interger: ";
    cin>>num;

    count(num);
    return 0;

}
void count(long num)        // Defining a function to count the numbers of even, odd and zeros.
{ 
    int even_digits = 0;    // Declaring a variable
    int odd_digits = 0;     // Declaring a variable
    int zero_digits = 0;    // Declaring a variable
    
    while (num > 0)         //A loop to count the number of even, odd and zeros
    { 
        int rem = num % 10;
        if (rem==0)         //Checking if remainder is equal to zero or not
        {
            even_digits--;
            zero_digits++;
        }
         
        if (rem % 2 == 0)   //Checking if remainder is equal to zero or not
            even_digits++; 
        else
            odd_digits++; 
        num = num / 10; 
    } 
    cout << "Even Digits : "<< even_digits<<endl;       //Printing even digits 
    cout << "Odd Digits :  "<< odd_digits<<endl;        //Printing odd digits
    cout << "Zero Digits : "<< zero_digits<<endl;       //Printing zero digits
    cout<<"-------------------------------------------The End-------------------------------------------"<<endl;
}
     
    