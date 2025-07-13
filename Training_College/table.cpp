#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int no1 ,no2;
    int count =0;
    cin>>no1>>no2;
    int x,y;
    
    for(int i =1;i<=10;i++)
    {   
        x = i*no1;
         for(int j=1;j<=10;j++ )
         {
            y = j*no2;
            if(x==y)
            {
                count++;
                cout<<"Common Digit :"<<y<<endl;
            }
         }   
    }

    
    cout<<"Count:"<<count;
}