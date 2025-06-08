#include<iostream>
using namespace std;
int main()
{   
    
    int x = 65;
    char a = x ;
    for(int i =1;i<=5;i+=2)
    {
        for(int j=1;j<=i;j++)
        {
           cout<<a<<" ";
           a++;
        }
        cout<<endl;
    }
    return 0;
}