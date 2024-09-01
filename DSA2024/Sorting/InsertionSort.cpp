// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[1000];
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     cout<<"Enter the "<<n<<" element:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=1;i<n;i++){
//         for(int j=i;j>0;j--){
//             if(arr[j]<arr[j-1])
//             swap(arr[j],arr[j-1]);
//             else
//             break;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// output
// Enter the size of array:5
// Enter the 5 element:4 2 1 3 6
// 1 2 3 4 6 


#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
     int n;
     cout<<"Enter the size of array:";
     cin>>n;

     cout<<"Enter the "<<n <<" element:";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1])
                swap(arr[j],arr[j-1]);
                else
                break;
            }
        }
     
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}








