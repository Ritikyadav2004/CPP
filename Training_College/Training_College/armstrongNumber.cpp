#include<iostream>
using namespace std;
int main()
{
    int number;
    printf("Enter Number:");
    cin>>number;
    int count=0;
    int num1;
    int original_number=number;
    for(int i=1;i<=3;i++)
    {
        num1=number%10;
        count=count+(num1*num1*num1);
        number=number/10;
    }
    if(count== original_number)
    printf("Armstrong Number");
    else
    printf("Not Armstrong Number");
}