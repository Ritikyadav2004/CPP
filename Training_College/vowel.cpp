/*
wrtiw a cpp code thats takes an alphabet as input and 
finds out wheather that alphabet is vowel and consont
*/
#include<iostream>
using namespace std;
int main()
{   
    
    char input;
    cin>>input;
    
    switch(input)
    {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':

       cout<<"Vowel"<<endl;
        break;
        default:
        cout<<"Consonant"<<endl;
    }
    return 0;
}