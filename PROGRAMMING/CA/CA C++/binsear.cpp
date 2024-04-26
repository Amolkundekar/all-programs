#include <iostream>
using namespace std;

// function to perform binary search on a sorted array
int binarySearch(int arr[], int low, int high, int x) {
    if (low > high) // base case: element not found
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == x) // element found at middle index
        return mid;
    else if (arr[mid] > x) // element might be in left subarray
        return binarySearch(arr, low, mid - 1, x);
    else // element might be in right subarray
        return binarySearch(arr, mid + 1, high, x);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers in sorted order:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x;
    cout << "Enter the integer to search for: ";
    cin >> x;

    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1)
        cout << "Element not found." << endl;
    else
        cout << "Element found at index " << result << "." << endl;

    return 0;
}

