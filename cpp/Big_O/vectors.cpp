#include <iostream>
#include <vector>
using namespace std;

// Vectors are similar to arrays but they can be resized
vector<int> createVector()
{
    vector<int> vec;
    return vec;
}

int main()
{
    auto vec = new vector<int>();
    vec->push_back(1);
    vec->push_back(2);
    cout << vec->at(1) << endl; // 1

    vector<int> vecOne = createVector();
    vecOne.push_back(3);
    vecOne.push_back(4);
    vecOne.push_back(5);
    vecOne.erase(vecOne.begin() + 1); // remove 4 ... vecOne[1]
    for (int i : vecOne)
    {
        cout << i << endl;
    }

    // looking up by index is O(1) time complexity
    // inserting at the end is O(1) time complexity
    // inserting in the middle is O(n) time complexity
    // deleting in the middle is O(n) time complexity
    // deleting at the end is O(1) time complexity
    // deleting at the beginning is O(n) time complexity
    // deleting by value is O(n) time complexity
    // searching by value is O(n) time complexity
    // sorting is O(n log n) time complexity

    

    return 0;
}