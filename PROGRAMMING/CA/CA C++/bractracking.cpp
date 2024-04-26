#include <iostream>
#include <vector>

using namespace std;

vector<int> v;  // Vector to store the input set
vector<int> res;  // Vector to store the subset that sums up to the target sum
int n, target;  // Size of the set and target sum

// Function to check whether the current subset sums up to the target sum
bool check(int sum, int i) {
    if (sum == target) {
        return true;
    }
    if (i >= n || sum > target) {
        return false;
    }
    if (check(sum + v[i], i + 1)) {
        res.push_back(v[i]);  // If the i-th element is included in the subset, add it to the result vector
        return true;
    }
    return check(sum, i + 1);  // If the i-th element is not included in the subset, move on to the next element
}

int main() {
    cout << "Enter the size of the set: ";
    cin >> n;
    cout << "Enter the set of integers:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Enter the target sum: ";
    cin >> target;
    if (check(0, 0)) {  // Call the check function to find the subset that sums up to the target sum
        cout << "The subset that sums up to the target sum is: ";
        for (int i = res.size() - 1; i >= 0; i--) {  // Print the result vector in reverse order
            cout << res[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No subset found that sums up to the target sum.\n";
    }
    return 0;
}


