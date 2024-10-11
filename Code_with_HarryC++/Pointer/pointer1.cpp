#include <iostream>
#include "pointer1.h"
using namespace std;

int main() {
    //array example
    int marks[]={23,45,56,89};
    int *p = marks;
    // cout << "The value of marks[0] is : " << *p << endl;
    // cout << "The value of marks[1] is : " << *(p+1) << endl;
    // cout << "The value of marks[2] is : " << *(p+2) << endl;
    // cout << "The value of marks[3] is : " << *(p+3) << endl;

for(int i=0;i<4;i++){
    cout << "The value of marks["<<i<<"] is : " << marks[i] << endl;
}

    //   int a = 10;
    // int *p = &a;
    // // p = &a;
    // // cout << a << endl;
    cout << *(p++) << endl;
    cout << *(++p) << endl;
    cout << *(p) << endl;
    return 0;
}