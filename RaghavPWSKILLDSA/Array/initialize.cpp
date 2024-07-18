#include<iostream>
#include<climits>
using namespace std;


int main()
{
    // int arr[5]={1,2,3};
    // for(int i=0;i<5;i++)
    //     cout<<arr[i]<<" ";



    int arr[6];
    cout<<"Enter the element in array:";
    for(int i=0;i<6;i++)
    cin>>arr[i];

    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"Size of array:"<<sizeof(arr);
        return 0;
    
}