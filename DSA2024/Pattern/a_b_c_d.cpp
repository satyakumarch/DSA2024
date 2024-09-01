#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int row=1;row<=n;row++){
        char name='a'+row-1;
        for(int col=1;col<=5;col++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}