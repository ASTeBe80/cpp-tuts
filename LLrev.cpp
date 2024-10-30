#include<bits/stdc++.h>
using namespace std;

class LL{
    private:
        struct Node{
            int data;
            Node* next;
            Node(int val) : data(val), next(nullptr){}
        };
        Node* head;
        Node* tail;
    public:
        LL():head(nullptr),tail(nullptr){}
        ~LL(){
            Node* curr = head;
            while(head!=nullptr){
                head = curr->next;
                delete curr;
                curr = head;
            }
        }

        void append(int val){
            Node* newNode = new Node(val);
            if(tail==nullptr)
                head = tail = newNode;
            else{
                tail -> next = newNode;
                tail = newNode;
            }
        }

        void prepend(int val){
            Node* newNode = new Node(val);
            if(head==nullptr)
                head = tail = newNode;
            else{
                newNode -> next = head;
                head = newNode;
            }
        }

        int getLength(){
            Node* it = head;
            int len=0;
            while(head!=nullptr){
                len++;
                it = it->next;
            }
            return len;
        }

        void printlist(){
            Node* it = head;
            int i=0;
            while(it!=nullptr){
                cout<<i<<"->"<<it->data<<endl;
                it = it->next;
                i++;
            }
        }

        void delbypos(int pos){
            int len = getLength();
            if(pos<0 || pos>len){//>=, not >
                cout<<"Node doesn't exist";
                return;
            }
            Node* bwd = nullptr;
            Node* curr = head;
            Node* fwd = head->next;
            int it = 0;
            while(it<pos){
                it++;
                bwd = curr;
                curr = fwd;
                fwd = fwd->next;
            }//useless, just refer to curr and delete the rest
            if(bwd==nullptr){
                curr->next=bwd;
                delete curr;
                head = fwd;
            }
            else if(fwd==nullptr){
                bwd->next=fwd;
                delete curr;
                tail = bwd;
            }
            else{
                bwd -> next = fwd;
                curr->next=nullptr;
                delete curr;
            }
        }

        void rev_list(){
            int len = getLength();
            if(len==0){
                cout<<"List is empty";
                return;
            }
            Node* left = head;
            Node* mid = left->next;
            Node* right = mid->next;
            //setting the last one as tail
            tail = left;
            while(mid!=nullptr){
                if(left==head)
                    left->next = nullptr;
                mid->next = left;
                left = mid;
                mid = right;
                if(right!=nullptr)
                    right = right->next;
            }
            head = left;
        }
};

int main(){
    LL a;
    a.append(1);
    a.append(2);
    a.printlist();
    a.delbypos(1);
    a.printlist();
    return 0;
}