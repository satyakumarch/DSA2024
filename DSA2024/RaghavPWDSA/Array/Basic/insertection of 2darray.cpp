// C++ program to implement iterative Binary Search
#include <bits/stdc++.h>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int start, int end, int x)
{
	while (start <= end) {
		int mid = start + (end - start) / 2;

		// Check if x is present at mid
		if (arr[mid] == x)
			return mid;

		// If x greater, ignore left half
		if (arr[mid] < x)
			start = mid + 1;

		// If x is smaller, ignore right half
		else
			end = mid - 1;
	}

	// If we reach here, then element was not present
	return -1;
}

// Driver code
int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}

