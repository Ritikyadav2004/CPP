#include<iostream>
using namespace std;
int main()
{
    // code for s to pow1 4
    int pow,no;
     cout<<"Enter Base:";
    cin>>no;
    cout<<"Enter Power:";
    cin>>pow;
    int pow1 = 1;
    for (int i = 1; i <=pow; i++)
    {
        pow1 = pow1*no;
        cout<<i<<":"<<pow1<<endl;
    }
    
}