#include <iostream>
using namespace std;

// O(1) time complexity because the function runs only once
void printItem(int n) {
    cout << n*2 << endl;
}

// O(n) time complexityn because the function runs 'i' amount of times
void printItems(int i) {
    for (int j=1; j<=i; j++) {
        cout << j << endl;
    }
}

// O(n^2) time complexity because of the nested loops 
void printMoreItems(int i) {
    for (int n=0; n<i; n++) {
        for (int j=0; j<i; j++) {
            for (int m=0; m<i; m++){
               cout << n << j << m << endl; 
            }
        }
    }
}

// O(log n) time complexity because the function runs log(n) amount of times
// data must be sorted for binary search and the time complexity is O(log n)
void printItemLog(int n){

}

// Drop constants and non-dominant terms
// O(2n) -> O(n), O(n^2 + 3n + 100 + log(n)) -> O(n^2), O(1000) -> O(1), O(2^n + n^2) -> O(2^n)

// O(a + b) time complexity because the function runs 'a' amount of times and 'b' amount of times
void printItemsTwo(int a, int b) {
    for (int i=0; i<a; i++) {
        cout << i << endl;
    }
    for (int j=0; j<b; j++) {
        cout << j << endl;
    }
}

// O(a * b) time complexity because the function runs 'a' amount of times and 'b' amount of times
void printItemsThree(int a, int b) {
    for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++) {
            cout << i << j << endl;
        }
    }
}

int main() {
    printItemsThree(1, 2); // O(1 * 2) -> O(2)
    return 0;
}