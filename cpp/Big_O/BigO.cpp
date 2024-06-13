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
void printItemLog(int n){}

// Drop constants and non-dominant terms
// O(2n) -> O(n), O(n^2 + 3n + 100 + log(n)) -> O(n^2), O(1000) -> O(1), O(2^n + n^2) -> O(2^n)


int main() {
    printItem(5);
    return 0;
}