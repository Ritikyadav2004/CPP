
// refer problem no 3
#include<iostream>
using namespace std ;
int main()
{
     
     int no=10;
     int sum = 0;
     
     for(int i =1; i<=no;i++)
     {   

        int fact = 1;
        int pow  = 1;
         for(int m =1;m<=i;m+=2)
        {
            for (int  j = 1; j < = i; j++)
            {
              fact = fact*j;
            }
        }
    for (int k = 1; k < =i; k++)
    {
         pow =pow*2*i;
    }  
    sum = sum+(fact/pow);

     }
   
    
}