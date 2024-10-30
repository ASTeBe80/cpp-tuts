#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
        struct Node{
            int data;
            Node* next;
            Node(int val) : data(val), next(nullptr){}
        };
        Node* head;
    
    public:
        Stack() : head(nullptr) {}
        ~Stack(){
            Node* curr = head;
            while(curr){
                head = curr->next;
                delete curr;
                curr = head;
            }
        }

        void push(int val){
            Node* curr = new Node(val);
            curr->next = head;
            head = curr;
        }

        void pop(){
            Node* curr = head;
            head = curr->next;
            delete curr;
        }

        bool isEmpty(){
            return head == nullptr;
        }

        void peek(){
            cout<< head->data<<endl;
        }

        void printStack(){
            Node* curr = head;
            while(curr){
                peek();
                pop();
            }
        }
};

int main(){
    Stack s;
    s.push(6);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    s.printStack();
    return 0;
}