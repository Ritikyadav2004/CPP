#include<iostream>
#include<stdio.h>
using namespace std;
// SIR CODE FOR THIS
int main()
{
    int no=5 ;
    //cin>>no;
    int k = no/2;
    for(int i = no;i>0;i-=2)
    {   
         
          for(int j=1;j<k;j++)
        {
            cout<<"\t";
        }
        
        for(int j = 1; j<=i;j++)
        {
            cout<<"\t*";
        }
        cout<<endl;
        // for(int j=0;j<k;j++)
        // {
        //     cout<<"  ";
        // }
        
        
        k++;
        cout<<endl;
    }
}