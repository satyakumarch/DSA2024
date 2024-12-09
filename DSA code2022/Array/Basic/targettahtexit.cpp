


#include<iostream>
#include<vector>
using namespace std;

string twosum(int n,vector<int> &arr,int target){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==target){
				return "YES";
			}
		}
	}
}
int main(){
	int n;
	cout<<"Enter the number:";
	cin>>n;
	
	vector<int> arr(n);
	cout<<"Enter "<<n<<"element:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cout<<"Ente your target:";
	cin>>target;
	
	string ans=twosum(n,arr,target);
	cout<<"The sum of the two element is :"<<ans;
	
}
//output
//Enter the number:5
//Enter 5element:1 2 4 5 3
//Ente your target:5
//The sum of the two element is :YES
