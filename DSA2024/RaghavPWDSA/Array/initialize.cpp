#include<iostream>
#include<climits>
using namespace std;


int main()
{
    // int arr[5]={1,2,3};
    // for(int i=0;i<5;i++)
    //     cout<<arr[i]<<" ";



    // int arr[6];
    // cout<<"Enter the element in array:";
    // for(int i=0;i<6;i++)
    // cin>>arr[i];

    // for(int i=0;i<6;i++)
    // cout<<arr[i]<<" ";  
    // cout<<endl;
    // cout<<"Size of array:"<<sizeof(arr);



    int arr[5]={2,3,1,7,8};
    int ans=INT16_MAX;
    //min value
    for(int i=0;i<5;i++)
    {
        if(arr[i]<ans)
        ans=arr[i];
    }
    cout<<ans<<endl;

    //max value
    ans=INT16_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }
    cout<<ans<<endl;
    return 0;
}