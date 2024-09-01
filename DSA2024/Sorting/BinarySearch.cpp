// #include<iostream>
// using namespace std;

// int BinarySearch(int arr[],int n,int key)
// {
//     //start,end,mid
//      int start=0,end=n-1,mid;
     
//         while(start<=end)
//         {
//             //mid ko find karo

//             mid=start+(end-start)/2;

//             //arr[mid]==key
//             if(arr[mid]==key)
//             return mid;

//             //arr[mid]<key
//             else if(arr[mid]<key)
//             start=mid+1;

//             //arr[mid]>key 
//             else
//              end=mid-1;
//         }
//         return -1;
     
// }

// int main(){
//     int arr[1000];
//     int n;

//     cout<<"Enter the size of array:";
//     cin>>n;

//     cout<<"Enter the number of element:";
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     3
//     int key;
//     cout<<"Enter the value you want to search:";
//     cin>>key;

//     cout<<BinarySearch(arr,n,key)<<endl;
//     return 0;
    
// }

#include<iostream>
#include<vector>
using namespace std;

 int BinarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else
        end=mid-1;
        
    }
    return -1;
 }

int main()
{
    int arr[1000];

    int n;
    cout<<"Enter the size of array:";
    cin>>n;

    cout<<"Enter the number of element:"<<endl;;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
cout<<endl;
    int key;
    cout<<"Enter the number you want to search:"<<endl;
    cin>>key;

    cout<<BinarySearch(arr,n,key)<<endl;
    return 0;

}

