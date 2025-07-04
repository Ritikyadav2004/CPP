#include<iostream>
using namespace std;
// not working properly

int main()
{
    int sum   = 0;
    int no = 3;
    int f=1;
    int s = 1;
    int i = 1;
    while (i<=no)
    {   
        f = 1;
        for(int j =1 ;j<=i;j++) // return factorial of the number
        {
            f=f*j;
            cout<<f<<" , ";
          //  cout<<f<<endl;     
        }

        cout<<"\n\n";
        for(int k = 1; k<=i ; k++)
        {
         s=s*f;
         cout<<s<<" , ";
        }
        cout<<"\n\n";
        sum  = sum+s;
        i++;
    }
    cout<<sum;
    
}