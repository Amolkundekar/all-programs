#include <iostream>
using namespace std;

// function to perform ternary search on a sorted array
int ternarySearch(int arr[], int left, int right, int x) {
    if (left > right) // base case: element not found
        return -1;

    int mid1 = left + (right - left) / 3;
    int mid2 = right - (right - left) / 3;

    if (arr[mid1] == x) // element found at mid1 index
        return mid1;
    else if (arr[mid2] == x) // element found at mid2 index
        return mid2;
    else if (arr[mid1] > x) // element might be in left third
        return ternarySearch(arr, left, mid1 - 1, x);
    else if (arr[mid2] < x) // element might be in right third
        return ternarySearch(arr, mid2 + 1, right, x);
    else // element might be in middle third
        return ternarySearch(arr, mid1 + 1, mid2 - 1, x);
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

    int result = ternarySearch(arr, 0, n - 1, x);

    if (result == -1)
        cout << "Element not found." << endl;
    else
        cout << "Element found at index " << result << "." << endl;

    return 0;
}

