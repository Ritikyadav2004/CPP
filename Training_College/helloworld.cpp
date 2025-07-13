#include<iostream>
using namespace std;
class datatype
{
    public:
    int number;
    string name;
    float numbe;

};
int main()
{    
    datatype a;
    cout<<"Enter All dedtails\n";
    cin>>a.number;
    cin>>a.name;
    cin>>a.numbe;
    cout<<endl<<"details are\n";
    cout<<a.name<<endl<<a.number<<endl<<a.numbe<<endl;
    return 0;
}
