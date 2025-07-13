#include<iostream>
using namespace std ;
int main()
{
    int no = 7;
    int lines=no-1;
    int midky=lines/2;
    for(int i=0;i<no;i++)  //row
    {
        for(int j=0;j<no;j++)  // columns
        {
         if(i==midky || j==midky  ||(i<midky && j==0) ||(i>midky && j==lines) || (j<midky && i==lines)|| (j>midky && i==0))
    {cout<<" * ";}
       
         else
{         cout<<"   ";

}
        }
        cout<<endl;


    }
}