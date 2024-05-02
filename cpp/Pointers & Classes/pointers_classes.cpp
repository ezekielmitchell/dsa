#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Job {
public:
    string title;
    double salary;
    int id;
};

void printJob(Job job) {
    cout << "Title: " << job.title << endl;
    cout << "Salary: " << job.salary << endl;
    cout << "ID: " << job.id << endl;

};

void pointers(int a, int b) {
    int *p1 = &a;
    int *p2 = &b;

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;

    cout << "p1: " << *p1 << endl;
    cout << "p2: " << *p2 << endl;

    *p1 = 10;
    *p2 = 20;

    cout << "p1: " << *p1 << endl;
    cout << "p2: " << *p2 << endl;

    p1 = p2;

    cout << "p1: " << *p1 << endl;
    cout << "p2: " << *p2 << endl;

    *p1 = 30;

    cout << "p1: " << *p1 << endl;
    cout << "p2: " << *p2 << endl;
}



int main() {
    Job* job1 = new Job( {"Software Engineer", 100000, 1} );

    printJob(*job1);

    return 0;
}

