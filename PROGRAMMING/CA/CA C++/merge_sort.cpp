#include <iostream>
#include <vector>
using namespace std;

// function to merge two sorted subarrays into one sorted array
void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> leftArr(mid - left + 1);
    vector<int> rightArr(right - mid);

    // copy elements from the original array to the left and right subarrays
    for (int i = 0; i < leftArr.size(); i++)
        leftArr[i] = arr[left + i];
    for (int i = 0; i < rightArr.size(); i++)
        rightArr[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    // merge the left and right subarrays into the original array
    while (i < leftArr.size() && j < rightArr.size()) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // copy any remaining elements from the left or right subarrays
    while (i < leftArr.size()) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < rightArr.size()) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// function to perform the merge sort algorithm recursively
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // recursively sort the left and right halves of the array
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // merge the sorted halves of the array
        merge(arr, left, mid, right);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

