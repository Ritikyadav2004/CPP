#include<iostream>
using namespace std;
void check(int x)
{
    int count=0;
    for (int i = 1; i <= x/2; i++)
    {
       if(x%i==0)
       count=count+i;
    }
    if(count==x)
    printf("Perfect Number\n");
    else
    printf("Not Perfect Number\n");
}
int main(){
    check(28);
    return 0;

}