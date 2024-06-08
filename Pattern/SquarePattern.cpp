#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}