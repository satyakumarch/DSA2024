// #include<iostream>
 #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int arr[1000];
//  int n;
//  cout<<"Enter the size of array:";
//  cin>>n;
//  cout<<"Enter the element in array:";
//  for(int i=0;i<n;i++){
//     cin>>arr[i];

//  }
// for(int i=n-2;i>=0;i--){
//     bool swapped=0;
//     for(int j=0;j<=i;j++){
//         if(arr[j]>arr[j+1])
//         {
//             swapped=1;
//             swap(arr[j],arr[j+1]);
//         }
//     }
//     if(swapped==0)
//     break;
// } 
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of element:";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<<" Element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-2;i>=0;i--){
        bool swapped=0;
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1])
            {
                swapped=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==0)
        break;


    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
// Enter the number of element:5
// Enter the 5 Element:2 1 23 3 0
// 0 1 2 3 23 