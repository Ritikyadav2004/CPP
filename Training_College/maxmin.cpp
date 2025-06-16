#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=5;
    // cin>>n;
    int a[n]={1,2,3,4,5};
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }

    if (n==1)
    {
        cout<<"NA";
    }
    else{
        int firstmax = INT_MIN, secondmax = INT_MIN;
        int firstmin = INT_MAX, secondmin = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i]>firstmax)
            {
                secondmax = firstmax;
                firstmax = a[i];
            }
            else if (a[i]>secondmax && a[i]!=firstmax )
            {
               secondmax = a[i];
            }
        
            if (a[i]<firstmin)
            {
               secondmin = firstmin;
                firstmin = a[i];
            }
            else if (a[i]<secondmin && a[i]!=firstmin)
            {
                secondmin = a[i];
            }
        
        }
        cout<<secondmin<<" "<<secondmax;
    }
    
    
}