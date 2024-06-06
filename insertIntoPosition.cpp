#include<iostream>
using namespace std;
int main(){
   int array[10],n,pos,x;
   cout<<"Enter the size of an array:";
   cin>>n;
   cout<<"Enter array element:";
   for(int i=0;i<n;i++){
    cin>>array[i];
   } 
    
    cout<<"Enter the insertion location:";
    cin>>pos;
    cout<<"Enter the value to isert:";
    cin>>x;
    for(int i=n-1;i>=pos-1;i--){
        array[i+1]=array[i];

    }
    array[pos-1]=x;
    n++;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
return 0;
} // namespace std;
