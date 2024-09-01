// #include <iostream>
// using namespace std;

// int partition(int arr[], int start, int end) {
//     int pivot = arr[end];
//     int pos = start;

//     for (int i = start; i < end; i++) {
//         if (arr[i] <= pivot) {
//             swap(arr[i], arr[pos]);
//             pos++;
//         }
//     }
//     swap(arr[pos], arr[end]);
//     return pos;
// }

// void quicksort(int arr[], int start, int end) {
//     if (start < end) {
//         int pivot = partition(arr, start, end);
//         quicksort(arr, start, pivot - 1);
//         quicksort(arr, pivot + 1, end);
//     }
// }

// int main() {
//     int arr[] = {10, 2, 3, 5, 6, 7, 8, 4, 6, 3, 43, 5};
//     quicksort(arr, 0, 11);
//     for (int i = 0; i < 12; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }


#include<iostream>
using namespace std;
int partition(int arr[],int start,int end){
    int pivot=arr[end];
    int pos=start;
    for(int i=start;i<end;i++){
    if(arr[i]<=pivot){
        swap(arr[i],pos);
        pos++;
    }
}
swap(arr[pos],arr[end]);
return pos;
}
int quicksort(int arr[],int start,int end){
    if(start<end){
        int pivot=partition(arr,start,end);
        quicksort(start,end,pivot-1);
        quicksort(start,end,pivot+1);
    }
};
int main(){
    int arr[]={1 2 9 4 2 3 6 9 3 8 3 4 6};
    quicksort(arr,0,12);
    for(int i=0;i<13;i++){
        cout<<arr[i]<<" ";
    }
}


