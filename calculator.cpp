#include<iostream>
using namespace std;
int main() {
   
    int a,b;
    char c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(c=='+')cout<<a+b;
    else if(c=='-')cout<<a-b;
    else if(c=='*')cout<<a*b;
    else if(c=='/')
    {
        if(b==0)cout<<"INF";
        else cout<<a/(float)b;
    }
       
    else if(c=='%')cout<<(a%b);
    else cout<<"NA";
    return 0;
}