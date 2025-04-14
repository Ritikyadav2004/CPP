#include<iostream>
using namespace std;
inline int cube(int a)
{   
    cout<<"Cube of a number is--->\n";
    return(a*a*a);
}
inline float div(float x,float y)
{   
    cout<<"division of 2 number is --->\n";
    return(x/y);
}
int main()
{   
    float a,b;
    int x;
    printf("Enter two float vale\n1 integer value--->\n");
    cin>>a;
    cin>>b;
    cin>>x;
    cout<<cube(x)<<"\n";
    cout<<div(a,b)<<"\n";
    cout<<"Program run successfully";

}
