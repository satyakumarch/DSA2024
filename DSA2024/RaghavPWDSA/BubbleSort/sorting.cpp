#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //input part
    vector<int> v(5);
    cout<<"Enter the number of element:";
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    //sorting array in asscending order
    sort(v.begin(),v.end());//O(nlogn)
    //sorting array in descending array
    reverse(v.begin(),v.end());
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
