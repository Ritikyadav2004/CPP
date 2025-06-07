#include<iostream>
using namespace std;
int main()
{
    int n,i1=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
       cin>>arr[i];
       
    do
    {
        cout<<arr[i1]<<" ";
        i1++;
    } while (i1<n);
    
    return 9;
    
}
}