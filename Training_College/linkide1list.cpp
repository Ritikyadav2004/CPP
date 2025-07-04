#include<iostream>
using namespace std;
struct NODE
{
    int data;
    NODE*next;
};
int main()
{
    NODE x,y,z;//creating object
    x.data=10;//storinf data
    x.next=&y;//assigning adress of next class
    y.data=5;
    y.next=&z;
    z.data=15;
    z.next=nullptr;  // to handle last address
    NODE *ptr=&x;    // importanr to assign intial address
    cout<<ptr->data<<endl<<ptr->next<<endl;// a ki value b ka address
    ptr=ptr->next;
    cout<<ptr->data<<endl<<ptr->next<<endl;// b ki value c ka address
    ptr=ptr->next;
    cout<<ptr->data<<endl<<ptr->next<<endl;// c ki value null address
}