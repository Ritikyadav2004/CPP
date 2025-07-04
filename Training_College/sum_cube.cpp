#include<iostream>
using namespace std;
 int calci(int no)
 {
    int pow = 1;
    for(int i=1;i<no;i++)
    {
      pow= pow*no;
    }
    return pow;
 }

 int main()
 {
    int no;
    cin>>no;
    int sum = 0;
    for (int i = 2; i <=no; i+=2)
    {
        sum=sum+calci(i);
    }
    cout<<sum;
 }