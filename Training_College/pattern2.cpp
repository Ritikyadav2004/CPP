//MY HALF PASCLE CODE
#include<iostream>
using namespace std;
int main()
{   
    int k = 7/2;
    for (int i = 1; i<=7; i+=2)
    {
       for(int j=1;j<=k;j++)
       {
        cout<<"\t";
       }
       k--;
       for(int k=1;k<=i;k++)
       {
        cout<<"\t*";
       }
       cout<<endl;
    }
    
}