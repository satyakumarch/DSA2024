// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[]={5,3,2,1,0,4,0,2,0,6,0};
//     int n=11;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     //bubble sort
//     for(int i=0;i<n-1-i;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]==0){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// output
// 5 3 2 1 0 4 0 2 0 6 0 
// 5 3 2 1 4 2 6 0 0 0 0 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={0,1,3,4,5,0,2,3,4,0};
    int n=10;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1-i;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}