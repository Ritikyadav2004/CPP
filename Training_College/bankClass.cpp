#include<iostream>
using namespace std;
class BankAccount
{   
    public:
    long acno;
    float balance; 
    string name;
    BankAccount *ptr;
     void showdata()
    {
        cout<<"Account No:"<<acno<<endl;
        cout<<"Name      :"<<name<<endl;
        cout<<"Balance   :"<<balance<<endl;

    }
    void filldata()
    {
         cout<<"Enter Your Name :";
         cin>>name;
         cout<<"Enter Account   :";
         cin>>acno;
         cout<<"Entr Balance    :";
         cin>>balance;
         showdata();

    }
   
    void getbalance()
    {
        cout<<"Balance :"<<balance<<endl;
    }


} arr[5];
void option()
{
    cout<<"1.Create Account"<<endl<<"2.Cheack Balance"<<endl<<"3.Dispaly Information"<<"4.Exit";
}
int main()
{
   int i=-1;
   option();
   int choice;
    cout<<"Enter choice :"<<endl;
    cin>>choice;
   if(choice==1)
   {
    i++;
    arr[i].filldata();
    }
    else if(choice==2)
    arr[i].showdata();
    else if(choice==4)
    return 0 ;
    else
    cout<<"To be created";
    
    
}

