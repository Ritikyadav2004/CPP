#include<iostream>
using namespace std ;
// to claculate fact
// int factorial( int x )
// {
//     if( x!= 0);
//     return x*factorial(x-1);
// }
// // to calcultae i to the pow i
// int pow(int no)
// {   
//     int pow1=1;
//     for (int  i = 1; i <=no; i++)
//     {
//         pow1 = pow1*no;
//     }
//     return pow1;
    
// }

// int main()
// {
//     int fact = 1;
//     int  input;
//     cin>>input;
//     int sum = 0;
//     for (int i = 1; i < =input; i=i+2)
//     {
//         sum = sum+(fact(i)/pow(i));
//     }

//     cout<<sum;
    
// }
///core programing

int main()
{
    
    
    int no = 5;
    int sum =0;
    for(int i=1;i<=no;i+=2)
    {
         int fact = 1;
         int pow1=1;
         for (int  j = 1; j <= i; j++)  // factorial
         {
            fact = fact*j;
            pow1 = pow1*no;

         }
         
        // for (int  k = 1; k <=i; k++)    // power
        //  {
        //  pow1 = pow1*no;
        //  }

         sum = sum+(fact/pow1);

    }

    
    
    
    
    
}

    