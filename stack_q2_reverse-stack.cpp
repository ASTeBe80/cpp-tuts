#include<bits/stdc++.h>
using namespace std;

void pushAtBottom(int data, stack<int> &s){
    if(s.empty()){
        s.push(data);
        return;
    }
    int top = s.top();
    s.pop();
    pushAtBottom(data, s);
    s.push(top);
}

void revStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int data = s.top();
    s.pop();
    revStack(s);
    pushAtBottom(data, s);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    revStack(s);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}