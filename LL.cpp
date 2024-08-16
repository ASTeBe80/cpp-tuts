#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
        Node(int i){
            value = i;
            next = nullptr;
        }
};

void append(int a[], int n, Node*head, Node*temp){
    for(int i=1; i<n; i++){
        head = new Node(a[i]);
        head -> next = temp;
        temp = head;
    }
}

int main(){
    int a[]={2,5,4,6,8,2,4};
    int n=sizeof(a)/sizeof(a[0]);
    Node* head = new Node(a[0]);
    Node* temp = head;
    append(a,n,head,temp);
    cout<<head -> value;
    return 0;
}