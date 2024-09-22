#include<iostream>
#include<cmath>
using namespace std;

int main()  {
    float A = 12.14, B = 5.12;
    
    float  cube_val=pow(A,3)+pow(B,3);
    cout<<cube_val<<endl;
  
  float sq_val=sqrt(cube_val);
  cout<<sq_val<<endl;
  cout<<sin(sq_val);
  
}