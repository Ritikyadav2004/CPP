#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next;

};
int main()
{
        node a,b,c;
        a.data=10;
        a.next=&b;
        b.data=20;
        b.next=&c;
        c.data=30;
        c.next=nullptr;
        node *ptr=&a;
        cout<<ptr->data<<endl<<ptr->next<<endl;// a ka data b a address
        //ptr=&b;
         ptr=ptr->next;   // c address store
        cout<<ptr->data<<endl<<ptr->next;//b ka data c ka address
        cout<<endl<<ptr;
        ptr=ptr->next;  //now c ka address 
        cout<<endl<<ptr->data<<endl<<ptr->next;// c ka data
        // ptr=ptr->next;
        // cout<<endl<<ptr;//c ka null address
    
}
