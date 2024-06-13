#include <iostream>
#include <vector>
#include <string>

using namespace std;

// A linked list is a data structure that consists of a sequence of elements where each element is a node that contains a value and a reference to the next node in the sequence.

// A node is a basic unit of a linked list that contains two parts: data and a reference to the next node in the sequence.


class Node {

    public:
    int value;
    Node* next;

    Node(int value) {
        this->value = value;
        this->next = nullptr;
    }

};

class LinkedList {

    public:

        LinkedList (int value) { // create new node
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        ~LinkedList() {
            Node* temp = head;

            while(head) {
                head = head->next;
                delete temp;
                temp=head;
            }
        }

        void append(int value) { // create new node
            Node* newNode = new Node(value);

            if (length == 0) {
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
            length++;
        }

        bool insert(int index, int value) { // create new node
            if(index < 0 || index > length) return false;

            if (index == 0) {
                append(value);
                return true;
            }

            Node* newNode = new Node(value);
            Node* temp = get(index-1);

            newNode->next = temp->next;
            temp->next = newNode;
            length++;

            
            return true;
        }

        void printList() {
            Node* temp = head;
            
            while (temp) {
                cout << temp->value << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        void getHead() {
            cout << "Head: " << head->value;
        }

        void getTail() {
            cout << "Tail: " << tail->value;
        }

        void getLength() {
            cout << "Length: " << length;
        }

        void deleteLast() {
            if (length==0) return;

            Node* temp = head;

            if (length == 1) {
                head = nullptr;
                tail = nullptr;
            } else {
                Node* pre = head;
                
                while (temp->next) {
                    pre = temp;
                    temp = temp->next;
                }

                tail = pre;
                tail->next = nullptr;
            }

        length--;
        delete temp;

    }

    void prepend(int value) {
        Node* newNode = new Node(value);

        if (length==0) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }

        length++;
    }

    void deleteFirst() {
        if (length==0) return;

        Node* temp = head;

        if (length==1) {
            head = nullptr;
            tail = nullptr;
        } else {
            head = head->next;
        }

        delete temp;
        length--;

    }

    Node* get(int index) {
        if (index < 0 || index >= length) return nullptr;
        
        Node* temp = head;
        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }

        return temp;
    }

    bool set(int index, int value) {
        Node* temp = get(index);

        if (temp) {
            temp->value = value;
            return true;
        }

        return false;
        
        
    }

    void deleteNode(int index) {
        if (index < 0 || index >= length) return;

        if (index == 0) return deleteFirst();

        if (index == index-1) return deleteLast();

        Node* prev = get (index-1);
        Node* temp = prev->next;

        prev->next = temp->next;
        delete temp;
        length--;

    }
    
    void reverse() {
        Node* temp = head;
        head = tail;
        tail = temp;

        Node* after = temp->next;
        Node* before = nullptr;

        for (int i = 0; i < length; i++) {
            after = temp->next;
            temp->next = before;
            before = temp;
            temp = after;
        }
    }
    
    private:
        Node* head;
        Node* tail;
        int length;
};

int main() {

    LinkedList* trail = new LinkedList(26);
    trail->append(20);
    trail->append(30);
    trail->append(12);
    trail->append(654);

    trail->printList();

    trail->deleteLast();
    
    trail->printList();

    trail->deleteFirst();
    trail->printList();
    trail->deleteFirst();
    trail->printList();

    trail->append(2);
    trail->append(22);

    trail->printList();

    trail->set(2, 33);
    trail->printList();

    trail->insert(2, 100);
    trail->printList();

    trail->reverse();
    trail->printList();


    // LinkedList* trailOne = new LinkedList(1);
    // trailOne->printList();
    // trailOne->deleteLast();
    // trailOne->printList();
    // trailOne->prepend(1);
    // trailOne->prepend(2);
    // trailOne->printList();


    
    return 0;
}