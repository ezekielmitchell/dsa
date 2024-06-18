#include <iostream>

using namespace std;

class Node {
    public:
        int value;
        Node* next;
        
        Node(int value) {
            this->value = value;
            next = nullptr;
        }
};

class LinkedList { 
    private:// c++ classes are private by default
        Node* head;
        Node* tail;
        int length;
        
    public:

        LinkedList() {
            head = nullptr;
            tail = nullptr;
            length = 0;
        }

        // create first node
        LinkedList(int value) {
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        // print list
        void printList(){
            Node* temp = head;
            while (temp) {
                cout << temp->value << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        // create new node at END
        void append(int value) {
            Node* newNode = new Node(value);
            if (head) {
                tail->next = newNode;
                tail = newNode;
            } else {
                Node* newNode = new Node(value);
                head, tail = newNode;
            }
            length++;
        }

        void deleteLast() { // delete last

            if (length == 0) return;
            
            Node* temp = head;
            
            if (length==1) {
                head = nullptr;
                tail = nullptr;
            } else {
                Node* pre = head;
                while (temp->next) {
                pre = temp;
                temp = temp->next;
            }
            tail = pre;
            tail->next=nullptr;            
            }
            
            delete temp;
            length--;
        }
        
        void deleteFirst() { // delete first node
            if (length==0) return;
            Node* temp = head;
            if (length==1) {
                head, tail = nullptr;
            } else {
                head = head->next;
                temp = nullptr;
            }
            delete temp;
            length--;
        }

        // create new node at BEGINNING
        void prepend(int value) {
            Node* newNode = new Node(value);

            if (length==0) {
                head, tail = newNode;
            } else {
                newNode->next = head;
                head = newNode;
            }
            length++;

        }

        void getHead() {
            cout << "Head: " << head->value << endl;
        }

        void getTail() {
            cout << "Tail: " << tail->value << endl;
        }

        void getLength() {
            cout << "Length: " << length;
        }

        Node* get(int index) {
            if (index<0 || index >= length) nullptr;

            Node* temp = head;
            for (int i=0; i<index; i++) {
                temp = temp->next;
            }

            return temp;
        }

        bool set(int index, int value) {
            Node* temp = get(index);

            if(temp) {
                temp->value = value;
                return true;
            }

            return false;

        }

        void getInfo() {
            getHead();
            getTail();
            getLength();
            cout << endl;
        }

        // Destructor
        ~LinkedList(){
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                
            }
        }
};

int main() {

    LinkedList* myList = new LinkedList(22);
    myList->append(1);
    myList->append(26);
    myList->printList();
    myList->getInfo();
    cout << "----" << endl;
    myList->set(2, 32);
    myList->printList();
    cout << "----" << endl;
    myList->getInfo();


    return 0;
}