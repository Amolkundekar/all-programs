#include <iostream>
using namespace std;

// function to find the minimum and maximum numbers in an array
void findMinMax(int arr[], int low, int high, int& min, int& max)
 {

    // if there is only one element in the array
    if (low == high)
	{
        min = arr[low];
        max = arr[low];
    }
    // if there are two elements in the array
    else if (high == low + 1)
   {
        if (arr[low] > arr[high]) 
		{
            max = arr[low];
            min = arr[high];
        }
        else 
		{
            max = arr[high];
            min = arr[low];
        }
   }
    // if there are more than two elements in the array
    else
	 {
   
        int mid = (low + high) / 2;
        int min1, max1, min2, max2;

        // divide the array into two parts
        findMinMax(arr, low, mid, min1, max1);
        findMinMax(arr, mid + 1, high, min2, max2);

        // compare the minimum and maximum numbers from the two parts
        if (min1 < min2)
            min = min1;
        else
            min = min2;

        if (max1 > max2)
            max = max1;
        else
            max = max2;
    }
}

int main() {

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int min, max;
    findMinMax(arr, 0, n - 1, min, max);

    cout << "Minimum number: " << min << endl;
    cout << "Maximum number: " << max << endl;

    return 0;
}

