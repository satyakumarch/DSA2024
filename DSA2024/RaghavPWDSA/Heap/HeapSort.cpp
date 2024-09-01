#include<iostream>
using namespace std;
void Heapify(int arr[],int index,int n)
{
    int largest=index;
    int left=2*index+1;
    int right=2*index+2;
//check if left child is larger than root
    if(left<n && arr[left]>arr[largest])
    largest=left;
    //check if right child is larger than largest so far
    if(right<n && arr[right]>arr[largest])
    largest=right;
//if largerst is not root
    if(largest!=index)
    {
        swap(arr[largest],arr[index]);
        //recursively heapify the affect sub tree
        Heapify(arr,largest,n);
    }
}

void BuildMaxHeap(int arr[],int n)
{
    //step down
    //build heap(rearrange array)
    for(int i=(n/2)-1;i>=0;i--)
    {
        Heapify(arr,i,n);
    }
}
void printHeap(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
}
 
void sortArray(int arr[],int n)
{
for(int i=n-1;i>0;i--)
{
    swap(arr[i],arr[0]);
    Heapify(arr,0,i);
}
};



int main()
{
    int arr[]={10,3,8,9,5,13,18,14,11,70};
    BuildMaxHeap(arr,10);
    printHeap(arr,10);
    sortArray(arr,10);
}