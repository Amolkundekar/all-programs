#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Item {
    int value;
    int weight;
};

bool cmp(struct Item a, struct Item b) {
    double ratio1 = (double)a.value / a.weight;
    double ratio2 = (double)b.value / b.weight;
    return ratio1 > ratio2;
}

double fractionalKnapsack(int W, vector<Item>& items) {
    sort(items.begin(), items.end(), cmp);
    double result = 0.0;
    int currentWeight = 0;

    for (int i = 0; i < items.size(); i++) {
        if (currentWeight + items[i].weight <= W) {
            currentWeight += items[i].weight;
            result += items[i].value;
        }
        else {
            int remainingWeight = W - currentWeight;
            result += items[i].value * ((double)remainingWeight / items[i].weight);
            break;
        }
    }

    return result;
}

int main() {
    int n, W;
    cout << "Enter the number of items: ";
    cin >> n;

    vector<Item> items(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the value and weight of item " << i+1 << ": ";
        cin >> items[i].value >> items[i].weight;
    }

    cout << "Enter the maximum weight of the knapsack: ";
    cin >> W;

    double maxValue = fractionalKnapsack(W, items);

    cout << "Maximum value that can be obtained = " << maxValue << endl;

    return 0;
}

