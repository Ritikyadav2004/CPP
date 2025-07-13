//full pascle traingle nhi hua merese
#include<iostream>
using namespace std;
int main()
{   
    int s=1,s1;
    int i3,i4,i5;
    int k=5/2;
    int no=5;
    for(int i=1;i<=7;i+=2)
    { if(i5<0){
      break;
    } 
    if(s!=no)
      {for(int j=1;j<=k;j++)
      {
        cout<<"\t";
        
      }
      s+=2;
      k--;
      for( int n=1;n<=i;n++)
      {
        cout<<"\t*";
      }
      cout<<endl;
      }
      s1 = s-2;
      
      if(s1==no){k=1;}
      else if(s1==no)
      {  i-=4;
         int i5=i;
        i3=i;
        i4=i3+2;
        
        for(int i1=1;i1<=k;i1++)
        {
          cout<<"\t";
        }
        k++;
        for(int i2=1;i2<=i4;i2++)
        {
          cout<<"\t*";
        }
        i4+=2;

        cout<<endl;

      }
    }
}