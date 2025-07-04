/*  write a program that calculate the electricity bill 
based on the followoing terruf plan*/

/*
1-->for the fisrt 100 unit the rate is = 3.36rs/unit*
2-->for the next 200 units (101-300) the rate is 7.34rs/unit
3-->for the next 200 units (301-500) yhe rate is 10.37rs/unit
4-->beyond 500 units the rate is 11.86rs/unit
*/
#include<iostream>
using namespace std;
int main()
{
    
    double unit,ebill;
    cin>>unit;
    if (unit<=100)
    {
        ebill=unit*3.36;
    }
    else if(unit>=101 && unit<=300)   
    {    
        ebill=100*3.36 +(unit-100)*7.34;
        // cout<<"Cost " <<unit*7.34;
    }
    else if(unit>=301 && unit<=500)
    {
        // cout<<"Cost "<<unit*10.37;
        ebill=(100*3.36)+(200*7.34)+((unit-300)*10.37);
    }
    else 
     {
        ebill=100*3.36+200*7.34+200*10.37+(unit-500)*11.86;

    }
    cout<<ebill;
     return 0;
}
 
