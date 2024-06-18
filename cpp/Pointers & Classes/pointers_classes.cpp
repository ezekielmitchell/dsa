#include <iostream>

using namespace std;

class Dog {
    private:
        string name;
        string breed;
        int age;

    public:
        Dog(){}

        Dog(string name, string breed, int age) {
            this->name = name;
            this->breed = breed;
            this->age = age;
        }

        void setName(string name) {
            this->name = name;
        }

        void setBreed(string breed) {
            this->breed = breed;
        }

        void setAge(int age) {
            this->age = age;
        }

        string getName() {
            return name;
        }

        string getBreed() {
            return breed;
        }

        int getAge() {
            return age;
        }

        void getDog() {
            cout << name << " if a " << breed << " that is " << age << " years old!" << endl;
        }
};

// pointers are used to store the address of a variable
int pointers(int x) {
    int *p = &x; // pointer to 'x' variable
    x = 1;
    cout << *p << endl;
    return *p;
}

void doubles(int x) {
    int* num1 = new int(5);
    int* num2 = num1;

    cout << *num1 << endl;
    cout << *num2 << endl;
}

int main() {
    Dog* endr = new Dog();
    endr->setAge(2);
    endr->setName("Endr");
    endr->setBreed("Rottweiler");
    endr->getDog();

    return 0;
}