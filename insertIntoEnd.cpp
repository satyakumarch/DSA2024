// #include<iostream>
// using namespace std;
// int main(){
//     int array[10],n,x,i;
//     cout<<"Enter size of an array:";
//     cin>>n;
//     cout<<"Enter array elements:";
//     for(int i=0;i<n;i++){
//         cin>>array[i];
//     }
//     cout<<"Enter element to inseert at the end:";
//     cin>>x;
//     array[i]=x;
//     n++;
//     for(int i=0;i<n;i++){
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;

int main() {
    int array[10], n, x;
    cout << "Enter size of an array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    cout << "Enter element to insert at the end: ";
    cin >> x;

    array[n] = x; // Add the element at the end
    n++; // Increase the size of the array

    cout << "Updated Array: ";
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }

    return 0;
}
