#include<iostream>
using namespace std;
int main()
{   
     int no = 2;
   
   // code for finding sum of factoril till nth term
    int f;
    int sum = 0;
    for (int i = 1; i <=no; i++)
    { 
        f = 1;
        for (int i1 = 1; i1 <=i; i1++)
        {
            f = f*i1;
        }
        sum+=f;
        
    }
    cout<<sum;
    
}