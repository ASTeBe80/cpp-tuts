#include<bits/stdc++.h>
using namespace std;

class LL{
    private:
        struct Node{
            int data;
            Node* next;
            //constructor for struct
            Node(int val):data(val),next(nullptr){}
        };

        Node* head;
        Node* tail;
    public:
        //constructor for class
        LL():head(nullptr),tail(nullptr){}

        //destructor
        ~LL(){
            Node* current = head;
            while(head!=nullptr){
                head = current->next;
                delete current;
                current = head;
            }
        }

        //prepend
        void prepend(int val){
            Node* newNode = new Node(val);
            if(head==nullptr)
                head = tail = newNode;
            else{
                newNode->next = head;
                head = newNode;
            }
        }

        //append
        void append(int val){
            Node* newNode = new Node(val);
            if(tail == nullptr)
                head = tail = newNode;
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        //printlist
        void printlist(){
            int i = 0;
            Node* it = head;
            while(it!=nullptr){
                cout<<i<<"->"<<it->data<<endl;
                it = it->next;
                i++;
            }
        }

        //getLength
        void getLength(){
            Node* it = head;
            int count=0;
            while(it!=nullptr){
                it = it->next;
                count++;
            }
            cout<<"Length : "<<count<<endl;
        }

        //del_by_pos
        void delbypos(int index){
            Node* i = head;
            Node* j;
            Node* k;
            int count=0;
            while(count<index-1){
                i = i->next;
                count++;
            }
            j = i->next; 
            k = j->next;
            i->next = k;
            delete j;
        }
};

int main(){
    LL a;
    a.append(3);
    a.prepend(2);
    a.prepend(1);
    a.append(4);
    a.printlist();
    a.getLength();
    a.delbypos(2);
    a.printlist();
    a.getLength();
    return 0;
}