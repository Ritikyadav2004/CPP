// wap to print R 
#include<iostream>
using namespace std;

      // else if(i>k && (j==0|| (i==0 && j<=k) || (j==k &&i<=k) ||(i==k && j<=k) || (i>k && i==j)))
            //cout<<"*";
int main()
{
    int no = 9; //  ||(i==no-2 && j==k)  ||(i>k && j==i-1 )
    int k=no/2;
    cout<<endl<<endl<<endl;
     for(int i=0;i<no;i++)
    {
        for(int j=0;j<no;j++)
        {
            if(j==0|| (i==0 && j<=k) || (j==k &&i<=k) ||(i==k && j<=k) || (i>k && i==j))
            cout<<"*  ";
            //k=n/2;
            else
            {
              if(i<=k)
              cout<<"   ";
              else
              cout<<"  ";
            }
            
        }
        cout<<endl;
    }

    cout<<endl<<endl<<endl;

}