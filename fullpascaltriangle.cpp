#include<iostream>
#include<stdio.h>
using namespace std;
// by sirs logic
int main()
{
    int i,j,n,star = 1;
    int no = 5;
    int k=5/2;
    for(int i = 1;i<=no;i++)
    {
        //printing spaces in increasing order if(i<n/2)
        for(int j=1;j<=k;j++)
        {
            cout<<"\t";
        }
        for(int l=1;l<=star;l++)
          {
               cout<<"\t*";
          }
          cout<<endl;
          
          if(i>no/2)
          {
            k++;
            star-=2;

          }   
          else{
            k--;
            star+=2;
          }
          
    }

}