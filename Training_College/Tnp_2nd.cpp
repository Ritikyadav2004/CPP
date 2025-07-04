#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int x = int a;
    int y = short int a1;
    int z = long int a2;
    int z1 = char ch;
    int k = float f;
    int n = double d;
    int x1 = bool container= true;
    // char str[50]="HEllo";
    char arr1[4]={"integer","Shrt_int","long_int","char"};
    int arr[7]={ a,a1,a2,ch,container,d,f};
    for (int i = 0; i < 7; i++)
    {    
        cout<<arr1[i];
        cout<<sizeof(arr[i])<<endl;
    }
    
    // cout<<sizeof(ch);
    // int len=strlen(str);    
    // // cout<<str<<endl<<ch<<endl<<container;
    // cout<<len;
    return 0;

}
