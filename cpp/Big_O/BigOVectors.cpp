#include <iostream>
#include <vector>

using namespace std;

// O(1)
void printFirstElement(const vector<int> &arr) {
    cout << arr[0] << endl;
}

// O(n)
void printAllElements(const vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
}

// O(n^2)
void printAllPossibleOrderedPairs(const vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            cout << arr[i] << ", " << arr[j] << endl;
        }
    }
}

// O(n^3)


int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    return 0;
}