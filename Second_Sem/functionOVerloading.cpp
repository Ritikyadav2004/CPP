#include<iostream>
using namespace std;
int add(int ,int );
int add(float , float );
int main()
{

    cout<<add(2,4);
    cout<<"\n";
    cout<<add(4.5,56.6);
}
 int add(int a,int b)
 {
    return(a+b);
 }
int add(float a, float b)
{
    return(a+b);
}
 