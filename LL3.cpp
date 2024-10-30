#include<bits/stdc++.h>
using namespace std;

class LL{
    private:
        struct Node{
            int data;
            Node* next;
            Node(int val):data(val),next(nullptr){}
        };
        Node* head;
        Node* tail;
    public:
        LL():head(nullptr),tail(nullptr){}
        ~LL(){
            Node* curr = head;
            while(curr!=nullptr){
                head = curr->next;
                delete curr;
                curr = head;
            }
        }

        void printlist(){
            Node* it = head;
            if(it==nullptr){
                cout<<"List is empty"<<endl;
                return;
            }
            int index=0;
            while(it){
                cout<<index<<" -> "<<it->data<<endl;
                it = it->next;
                index++;
            }
        }

        void prepend(int val){
            Node* newNode = new Node(val);
            if(head==nullptr)
                head = tail= newNode;
            else{
                newNode->next = head;
                head = newNode;
            }
        }

        void append(int val){
            Node* newNode = new Node(val);
            if(tail==nullptr)
                head = tail = newNode;
            else{
                tail->next=newNode;
                tail = newNode;
            }
        }

        int getLen(){
            Node* it = head;
            if(it==nullptr){
                cout<<"empty list"<<endl;
                return -1;
            }
            int len=0;
            while(it){
                len++;
                it = it->next;
            }
            return len;
        }

        void delbypos(int val){
            int len = getLen();
            if(val<0 || val>=len){
                cout<<"Node doesn't exist"<<endl;
                return;
            }
            int index=0;
            Node* curr = head;
            Node* prev = nullptr;
            Node* next = curr->next;
            while(index<val){
                index++;
                prev = curr;
                curr = next;
                next = next->next;
            }
            if(curr==head){
                head = next;
                delete curr;
            }
            else if(curr==tail){
                tail = prev;
                delete curr;
                tail->next = nullptr;
            }
            else{
                prev->next = next;
                delete curr;
            }
        }

        void revlist(){
            if(head==nullptr){
                cout<<"List is empty"<<endl;
                return;
            }
            Node* curr = head;
            Node* prev = nullptr;
            Node* next = nullptr;
            tail = head;
            while(curr){
                next = curr->next;
                curr->next = prev;
                prev=curr;
                curr=next;
            }
            head = prev;
        }

        void insert_at_pos(int pos, int val){
            int len=getLen();
            if(pos<0 || pos>len){
                cout<<"Can't add it"<<endl;
                return;
            }
            Node* curr = new Node(val);
            Node* prev=nullptr;
            Node* next=head;
            int it = 0;
            while(it<pos){
                it++;
                prev = next;
                next = next->next;
            }
            if(prev==nullptr){
                head = curr;
                curr->next = next;
            }
            else if(next==nullptr){
                prev->next = curr;
                tail = curr;
                curr->next = next;
            }
            else{
                prev->next = curr;
                curr->next = next;
            }
        }
};

int main(){
    LL a;
    a.append(9);
    a.append(3);
    a.append(1);
    a.append(10);
    a.append(5);
    a.printlist();
    cout<<a.getLen()<<endl;
    a.insert_at_pos(6,2);
    a.printlist();
    cout<<a.getLen()<<endl;
    return 0;
}