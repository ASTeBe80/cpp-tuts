#include <iostream>
using namespace std;

class LinkedList {
private:
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };
    Node* head;
    Node* tail;

public:
    LinkedList() : head(nullptr), tail(nullptr) {}

    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    void prepend(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {  // If the list is empty
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void append(int value) {
        Node* newNode = new Node(value);
        if (tail == nullptr) {  // If the list is empty
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList() const {
        int i = 1;
        Node* it = head;
        while (it != nullptr) {
            cout << i << "->" << it->data << endl;
            i++;
            it = it->next;
        }
    }
};

int main() {
    LinkedList list;
    list.prepend(3);
    list.prepend(2);
    list.prepend(1);
    list.append(5);
    list.printList();
    return 0;
}