#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            char name='a'+col-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
}
