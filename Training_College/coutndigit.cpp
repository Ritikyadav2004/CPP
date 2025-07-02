#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{    
    int no = 123456;
    int deci = 1;
    // cin>>no;
    int count = 0;
    int i = 1;
   // int k;
    int digit = no;
    
    while( no !=0)
    {
        no = no/10;
        count++;
        deci = deci*10;
    }
    deci=deci/10;
    int mod = 10;
    if(count%2==0)
    {
       while(i<=count/3)
       { 
         for(int i =1;i<=3;i++)
         {
         cout<<digit/deci<<digit%mod<<endl;
         i++;
         deci=deci/10;
         mod = mod*10;
         }
       }
    }  
    
}