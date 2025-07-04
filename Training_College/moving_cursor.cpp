#include<iostream>
#include<unistd.h>
#include<thread>
#include<chrono>
using namespace std;
int main()
{
    for(int i = 0;i<400;i++)
    {
       for(int i = 0;i<400;i++)
        {cout<<"*";
        sleep(1);
        cout<<"\b";
        cout<<" ";}
        
    }
}