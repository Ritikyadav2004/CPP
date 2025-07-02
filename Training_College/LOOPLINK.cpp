#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*next;
};
int main()
{
    Node a,b,c;
        a.data=10;
        a.next=&b;
        b.data=20;
        b.next=&c;
        c.data=30;
        c.next=nullptr;
        Node *ptr=&a;
        while(ptr!=nullptr)
        {
            cout<<endl<<ptr->data<<endl;
            cout<<ptr->next;
            ptr=ptr->next;
        }

}