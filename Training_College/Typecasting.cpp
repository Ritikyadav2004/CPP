#include <typeinfo>
#include <iostream>
using namespace std;
int main() {
    // char x='10';
    
    int x=8989;  //127 max limi t he eske age nhi jayge
    cout<<char(x);
    cout<<static_cast<int>(x);

    return 0;
}