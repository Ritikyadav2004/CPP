#include<iostream>
using namespace std;
int search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}
int main(void)
{
    int arr[] = {1,23,343,33,2,234,45,43,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result  = search(arr,n,234);
    (result==-1) ? cout<<"Element is not present"
                 : cout<<"Elemnt is present "<<result;
    return 0;
      
}