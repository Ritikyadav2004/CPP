#include<iostream>
using namespace std;
int main()
{
    //to get prime factor -->all number 
    //valid for those input which is greater thenx 1
    int number;
    cin>>number;
    int i=2;
    while(number>1)
    {
        if(number%i==0 &&i<=number)
        {
            cout << i<<" ";
            number=number/i;
        }
        else
        {
            i++;
            
        }
    }
}
