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
            Node* it = head;
            while(head!=nullptr){
                head = it->next;
                delete it;
                it = head;
            }
        }

        void prepend(int val){
            Node* newNode = new Node(val);
            if(head==nullptr)
                head=tail=newNode;
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
                tail->next = newNode;
                tail=newNode;
            }
        }

        void printlist(){
            Node* it = head;
            int i = 0;
            while(it!=nullptr){
                cout<<i<<"->"<<it->data<<endl;
                it = it->next;
                i++;
            }
        }

        void getLength(){
            Node* it=head;
            int len = 0;
            while(it!=nullptr){
                len++;
                it = it->next;
            }
            cout<<"Length of LL : "<<len<<endl;
        }

        void delbypos(int val){
            int limit = length();
            if(val<0 || val>limit){
                cout<<"Node doesn't exist";
                return;
            }
            int len = 0;
            Node* i = head;
            Node* j = nullptr;
            Node* k = i-> next;
            while(len<val){
                len++;
                j=i;
                i = k;
                k = k->next;
            }
            if(j==nullptr || k==nullptr){
                delete i;
                if(j==nullptr)
                    head = k;
                else    
                    tail = j;
            }
            else{
                delete i;
                j->next = k;
            }
        }

        int length(){
            Node* it = head;
            int len = 0;
            while(it!=nullptr){
                len++;
                it = it->next;
            }
            return len;
        }
};

int main(){
    LL a;
    a.append(2);
    a.prepend(1);
    a.append(3);
    a.prepend(0);
    a.printlist();
    return 0;
}