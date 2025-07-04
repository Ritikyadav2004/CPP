#include<iostream>
using namespace std;

// int reverseNumber(int no)
// {
//       int i1,k1=1,x1,i2;
//       //int no = 123456;
//     while(no!=0)
//     { 
//         if(k1>0)
//         {
//             i1 = no%10;
//             x1 = i1;
//         }
//        i2 = no%10;
       
//       if(k1<=0)
//       { 
//         x1 = x1*10+i2;
        
//       }
//       k1--;
//       no=no/10;
//     }
//     return x1;
// }
int count=0;
int reverseNumber(int no)
{
  int reverse = 0;
  while(no>0)
  { 
    count++;
    reverse = reverse*10+no%10;
    no/=10;
  }
  return reverse;
}
int count2(int n1)
{  
  int count1 = 0;
  while(n1>0)
  {
    count1++;
    n1/=10;
  }
  return count1;
}
int main()
{   
    
    int i,j,x = 0;
       int n1 = 123456;
       int c = count2(n1);
       //int p = n1;
       //cout<<c;
       int loop=0;
       int n = reverseNumber(n1);
       //cout<<n<<endl;
    while (loop<c/2)
    {
      i = n%10;   //n =  654321
      j=n1%10;    //n1 = 123456
      x=x*100+i*10+j;
      n1=n1/10;
      n=n/10;
      loop++;
    }
     
    
    cout<<x<<endl;
    
}
