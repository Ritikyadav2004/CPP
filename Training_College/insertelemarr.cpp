#include<iostream>
using  namespace std;
int main()
{
    int number,i1=0,i2=0;
    int n;
    long  sum=0;
    cin>>n;//enter number of elemnt to ve insert
    int arr[n];
    long long int product=1;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    //sum of all elemet
    while(i1<n)
    {
        sum=sum+arr[i1];
        i1++;
    }
    cout<<"sum "<<sum<<endl;
    float ag=(sum/(float)n);
    cout<<"avg "<<ag<<endl;
   
    // producut of element
     while(i2<n)
    {
        product=product*arr[i2];
        i2++;
    }
    cout<<"product "<<product<<endl;
    cout<<"revserarray " ;
    for(int k=n-1;k>=0;k--)
    {
        cout<<arr[k]<<" ";
    }
    
    return 0;
    
    
}