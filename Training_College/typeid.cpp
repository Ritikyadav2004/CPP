#include <typeinfo>
#include <iostream>
using namespace std;
int main() {
    char a1; // declare a1
    char b1 = a1;
    short b; // declare b
    long num;
    double flo;
    cout<<typeid(flo).name();

    cout<<endl<<sizeof(flo);

  
    return 0;
}