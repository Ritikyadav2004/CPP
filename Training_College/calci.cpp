//wap to calcuate number menu based
#include<iostream>
using namespace std;
int main()
{     
    int a1,b1;
    int choice;
   do
    { 
     cout<<endl<<"1-->Add\n2-->Subtract\n3-->Multiplay\n4-->Divide\n5-->Modulo\n6-->Exit"<<endl;
     cin>>choice;
        if(choice==1)
        {cout<<"Enter Two Number"<<endl;
        cin>>a1>>b1;
        cout<<a1<<"+"<<b1<<"="<<a1+b1;}
        else if(choice==2)
        {
            cout<<"\003[32m: Enter Two Number \033[0m"<<endl;
        cin>>a1>>b1;
        cout<<a1<<"-"<<b1<<"="<<a1-b1;
        }
        else if(choice==3)
        {
        cout<<"Enter Two Number"<<endl;
        cin>>a1>>b1;
        cout<<a1<<"x"<<b1<<"="<<a1*b1;
        }
        else if(choice==4)
        {
            cout<<"Enter Two Number"<<endl;
        cin>>a1>>b1;
        cout<<a1<<"/"<<b1<<"="<<a1/(float)b1;
        }
        else if(choice==5)
        {
            cout<<"Enter Two Number"<<endl;
        cin>>a1>>b1;
        cout<<a1<<" % "<<b1<<"="<<a1%b1;
        }
        else
        {
            cout<<"Enter Valid Choice!";
        }
    }while(choice!=6);
    return 0;
}