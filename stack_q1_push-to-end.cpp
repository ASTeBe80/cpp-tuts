#include<bits/stdc++.h>
using namespace std;

void push_at_end(int val, stack<int> &s){
    stack<int> a;
    while(!s.empty()){
        a.push(s.top());
        s.pop();
    }
    a.push(val);
    while(!a.empty()){
        s.push(a.top());
        a.pop();
    }
}

int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    push_at_end(4,s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}