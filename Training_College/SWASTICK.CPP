//WAP A PROGRAM TO PRINT SWASTIK
#include<iostream>
using namespace std;
int main()
{   
    int no = 11;
    int k=no/2;
    for(int i=0;i<no;i++)
    {
        for(int j=0;j<no;j++)
        {
            if((j==k || i==k)||(i<k && j==0) ||(i==0 && j>k) ||(i>k && j==no-1) || (i==no-1 && j<k))
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}