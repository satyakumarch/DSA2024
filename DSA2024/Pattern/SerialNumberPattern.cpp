#include<iostream>
using namespace std;
int main(){
    int n,count=1;
    cout<<"Enter the number:";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
}