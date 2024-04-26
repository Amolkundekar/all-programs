#include <iostream>
#include <vector>

using namespace std;

// Partition function used by QuickSort
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

// QuickSort function that uses Divide and Conquer
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Driver code
int main() {
    vector<int> arr;
    int n, num;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the " << n << "   elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

