/**
 * Big O
 * 
 * Big O notation is a mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity.
 * 
 * O(1) - Constant Time
 * O(log n) - Logarithmic Time
 * O(n) - Linear Time
 * O(n log n) - Linearithmic Time
 * O(n^2) - Quadratic Time
 * O(n^3) - Cubic Time
 * O(2^n) - Exponential Time
 * O(n!) - Factorial Time
 * 
*/


// O(1) : a single operation
// O(n) : a loop that runs n times
// O(n^2) : a loop inside a loop
// O(n^3) : a loop inside a loop inside a loop
// O(log n) : a loop that cuts the problem in half each iteration
// O(n log n) : an algorithm that divides the problem in half and then does something with each half


#include <iostream>
#include <vector>

using namespace std;

// O(1)
void printFirstElement(const vector<int> &arr) { // the time complexity of this function is O(1) because it only runs once regardless of the size of the array
    cout << arr[0] << endl;
}

// O(n)
void printAllElements(const vector<int> &arr) { // the time complexity of this function is O(n) because the loop runs n times where n is the size of the array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
}

// O(n^2)
void printAllPossibleOrderedPairs(const vector<int> &arr) { // the time complexity of this function is O(n^2) because the loop runs n times and inside the loop, there is another loop that runs n times
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            cout << arr[i] << ", " << arr[j] << endl;
        }
    }
}

// O(n^3) -- will be called O(n^2) due to drop rule
void printAllPossibleOrderedTriplets(const vector<int> &arr) { // the time complexity of this function is O(n^3) because the loop runs n times and inside the loop, there are two other loops that run n times
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            for (int k = 0; k < arr.size(); k++) {
                cout << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
            }
        }
    }
}

// O(log n)
int binarySearch(const vector<int> &arr, int target) { // the time complexity of this function is O(log n) because the array is divided in half each time the function is called
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) { // 
        int mid = left + (right - left) / 2;// to avoid overflow
        if (arr[mid] == target) { // if the target is found, the function returns the index of the target
            return mid; 
        } else if (arr[mid] < target) { // if the target is greater than the middle element, the left pointer is moved to the right of the middle element
            left = mid + 1; 
        } else {
            right = mid - 1; // if the target is less than the middle element, the right pointer is moved to the left of the middle element
        }
    }
    return -1; // if the target is not found, the function returns -1
}

// O(a + b)
void foo(const vector<int> &arr1, const vector<int> &arr2) { // the time complexity of this function is O(a + b) because the function takes two arrays as inputs
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << endl;
    }
    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << endl;
    }
}

// O(a * b)
void bar(const vector<int> &arr1, const vector<int> &arr2) { // the time complexity of this function is O(a * b) because the function takes two arrays as inputs and there is a nested loop inside the function
    for (int i = 0; i < arr1.size(); i++) {
        for (int j = 0; j < arr2.size(); j++) {
            cout << arr1[i] << ", " << arr2[j] << endl;
        }
    }
}


int main() {

    cout << binarySearch({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 5);



    return 0;
}

// Big O simplification rules:

// 1. Constants do not matter
// O(2n) => O(n)
// O(500) => O(1)
// O(13n^2) => O(n^2)

// 2. Smaller terms do not matter
// O(n + 10) => O(n)
// O(1000n + 50) => O(n)
// O(n^2 + 5n + 8) => O(n^2)

// 3. Drop non-dominant terms
// O(n^2 + n) => O(n^2)
// O(n^3 + n^2) => O(n^3)
// O(n^2 + n + 1) => O(n^2)

// 4. Different terms for inputs
// O(a + b) => O(a + b)
// O(a * b) => O(a * b)

// 5. Drop all constants
// O(2n) => O(n)
// O(500) => O(1)
// O(13n^2) => O(n^2)