#include<iostream>
using namespace std;
int main()
{
   int x,y;
   long long int result=1;
   cin>>x>>y;
//    while(y>0)
//    {
//     result=result*x;
//     y--;
//    }
for(int i=0;i<y;i++)
{
    result=result*x;
}
   cout<<result;
}