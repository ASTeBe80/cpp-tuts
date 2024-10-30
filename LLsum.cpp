#include<bits/stdc++.h>
using namespace std;       

void append(int val){
    Node* newNode = new Node(val);
    if(tail == nullptr)
        head = tail = newNode;
    else{
        tail -> next = newNode;
        tail = newNode;
    }
}

struct Node{
    int data;
    Node* next;
    Node(int val): data(val),next(nullptr){}
};
Node* head;
Node* tail;

int getlen(){
    Node* it = head;
    int len = 0;
    while(it){
        len++;
        it = it->next;
    }
    return len;
}

int main(){
    LL a;
    a.append(9);
    a.append(9);
    a.append(9);

    LL b;
    b.append(9);
    b.append(9);
    b.append(9);

    LL c;

    return 0;
}