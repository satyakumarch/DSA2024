#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n<2)
    {
        cout<<"Not Prime"<<endl;
    }
    else
    {
        for(int i=2;i<n;i=i+1)
        {
            if(n%i==0)
            {
                cout<<"Not prime number"<<endl;
                return 0;
            }
        }
     cout<<"prime number:"<<endl;  
         return 0;


    }
    return 0;
}