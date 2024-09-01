#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element:";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The array of the element is:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}