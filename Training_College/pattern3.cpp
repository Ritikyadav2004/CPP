//MY COEDE FOR print revers pascale tringle
#include<iostream>
using namespace std;
int main()
{   
    int k = 0;
    int no=5;
    for(int i=no;i>0;i-=2)
    {  
        for(int m=1;m<=k;m++)
        {
          cout<<"\t";
          
        }
       for(int j=1;j<=i;j++)
       {
        cout<<"\t*";
       }
       cout<<"\n";
       k++;
    }
}