#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    // int num;
    // cin>>num;
    // bool flag =true;
    //wap to check whether a nummbr is composite or not
//     if(num==1)cout<<"NONE";
// // ;    if(num==2||num==3)
// //     {
// //         cout<<"Prime Number";
// //     }
    
//     for(int i=2;i<=num/2;i++)
//     {   

//         // if(num%i==0)
//         // {
//         //     cout<<"Number is composite";
//         //     break;
//         // }
//         // else
//         // {
//         //     cout<<"Number is prime";
//         //     break;
//         // }
//         if(num%i==0)
//     {flag =false;// mean number not prime
//     break;}

//     }
//     if(!flag)cout<<"Composte Number";
//     if(flag)cout<<"Number is Prime";

// wap to count the digit of a number
//int count = 0;
//   int num1 = num;
//    while(num>0)
//    {
//      num=num/10;
//      count++;
//    } 
//    if(num1==0)cout<<1;
//    else
//    cout<<count;

// int sum=0;
// int temp =num;
// while(0<num)
// {
//     sum=sum+(num%10);
//     num/=10;
// }
// if(temp==0)cout<<"sum is 0";
// else
//  cout<<"sum is "<<sum;

// while(num>0)
// {    
//     sum=sum*10;
//     sum=sum+(num%10);
    
//     num/=10;
// }
// cout<<sum;

// for(int i=1;i<=num;i++)
// {
//     if(i%2!=0)
//     sum+=i;
//     else
//     sum-=i;
// }
// cout<<sum;
  // // fibonacci
  // int a=1,b=1;
  // //int sum=0;
  // for(int i=1;i<=num-2;i++)
  // {
  //   sum=a+b;
  //   a=b;
  //   b=sum;
  // }
  // cout<<sum;

  // //printing 4,7,10,13
  // int term=52;
  // int a = 4;
  // for(int i=1;i<=term;i++)
  // {
  //   cout<<(a+(i-1)*3)<<" ";
  // }

  //printing 3 , 12 , 48 an 
  // gen term r^(n-1)

  // int n = 5;
  // int a = 3;//first term;
  // int r = 4;//common ratio
  // int s = a*(pow(r,n-1))/(r-1);
  // for(int i=3;i<=s;i=i*4)
  // {
  //  cout<<i<<" ";
  // }
 
  //printing ascii value and character using while loop
  // char ch = 'a';
  // while(ch<='z')
  // {
  //   cout<<ch<<" "<<int(ch)<<endl;
  //   ch++;
  // }
  // int ch = 97;
  // do
  // {
  //   cout<<ch<<" "<<char(ch)<<endl;
  //   ch++;
   
  // } while (ch<=122);

  //FOR CAPITAL LATTER
  // int ch = 65;
  // for(int i=65;i<65+26;i++)
  // {
  //    cout<<i<<" "<<char(i)<<endl;
  // }

  // int num = 4656;
  // int sum  = 0;
  // while(num>0)
  // {
  //   int digit  = num%10;
  //   if(digit%2==0)
  //   {
  //     sum+=digit;
  //   }
  //   num/=10;
  // }
  // cout<<sum;
  
  // int num  =12;
  // int digit;
  // int original = num;
  // int number = 0;
  // while(num>0)
  // {
  //   digit = num%10;
  //   number =number*10+digit;
  //   num/=10;
  // }
  // cout<<original+number<<"["<<number<<"+"<<original<<"]";
 // factorial upto n
  // int input = 10;
  // long fact=1;
  // for(int i=1;i<=input;i++)
  // {
  //   for(int j=1;j<=i;j++)
  //   {
  //     if(j==1)
  //     {
  //       fact = 1;
  //     }
  //     else{
  //       fact = fact*j;
  //     }

  //   }
  //   cout<<fact<<endl;
  // }
  // for(int i=1;i<=input;i++)
  // {
  //   fact=fact*i;
  //   cout<<fact<<endl;
  // }
  //if n=3 then print the sum of 2+22+222
  int n = 5;
  int sum=0;
  int num=2;
  for(int i=1;i<=n;i++)
  {
    sum+=num;
    num=num*10+2;
  }
  cout<<sum;
}
