#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=5;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}