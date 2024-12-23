#include <iostream>
#include <vector>

using namespace std;

// Function to perform post-order traversal and store the result in an array
void postOrderTraversal(vector<int>& result, vector<int>& arr, int index) {
    if (index >= arr.size()) {
        return;
    }

    // Traverse left subtree
    postOrderTraversal(result, arr, 2 * index + 1);

    // Traverse right subtree
    postOrderTraversal(result, arr, 2 * index + 2);

    // Visit the current node and store its value in the result array
    result.push_back(arr[index]);
}

int main() {
    int n;
    cout<<"Enter the number:";
    cin >> n;
    vector<int> arr(n);

cout<<"Enter "<<n<<" element:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result;
    postOrderTraversal(result, arr, 0);

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
//Enter the number:5
//Enter 5 element:1 2 3 4 5
//4 5 2 3 1

