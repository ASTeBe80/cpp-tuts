#include <iostream>
using namespace std;
class LinkedList {
private:
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };
    int flag = 0;
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
        if(flag == 0){
            Node* newNode = new Node(value);
            newNode->next = head;
            head = newNode;
            tail = head;
            flag = 1;
        }
        else{
            Node* newNode = new Node(value);
            newNode->next = head;
            head = newNode;
        }
    }
    void printList() const {
        //TODO
        int i=1;
        Node* it = head;
        while(it!=nullptr){
            cout<<i<<"->"<<it->data<<endl;
            i++;
            it = it->next;
        }
    }
    
    void append(int value){
        if(flag==0){
            Node* newNode = new Node(value);
            newNode->next = nullptr;
            tail = newNode;
            head = tail;
            flag = 1;
        }
        else{
            Node* newNode = new Node(value);
            newNode->next = nullptr;
            tail->next = newNode;
            tail = newNode;
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