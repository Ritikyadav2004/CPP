#include<iostream>
using namespace std;

void check(int x)
{   bool flag=false;
    for(int i=1;i<=12;i++)
    {
        for(int j=1;j<=12;j++)
        {
            if(i*i*i + j*j*j == x)
            {
            cout<<"Sum of ";
            cout<<i<<"^3"<<"+"<<j<<"^3"<<endl;
            flag=true;

            
            
            }
           
            
        }
    }
    if(flag)
    cout<<"Is Pair of Ramanujan number";
    else
    cout<<"Not a pair of Ramanujan number";
}
int main()
{    
    int i=0;
    int a ;
    while(true && i!=5)
    {    
        printf("\nEnter Number to be check:");
        cin>>a;
        check(a);
        i++;
         
    }
}