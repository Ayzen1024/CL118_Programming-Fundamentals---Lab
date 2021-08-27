#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 999;
    while(a<1000)
    {
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        a++;
        b--;
    }
    return 0;
}