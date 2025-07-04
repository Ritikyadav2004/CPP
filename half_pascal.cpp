#include<iostream>
using namespace std;
//SIR'S CODE
int main()
{
    int no = 6 ;
   // cin>>no;
    int k = no/2;
    for(int i = 1;i<=no;i+=2)
    {
        for(int j=0;j<k;j++)
        {
            cout<<"\t";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"\t*";
        }
        k--;
        cout<<endl;
    }
}