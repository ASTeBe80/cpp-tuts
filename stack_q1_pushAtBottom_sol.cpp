#include<bits/stdc++.h>
using namespace std;

void pushAtBottom(int data, stack<int> &s){
    if(s.empty()){
        s.push(data);
        return;
    }
    int top = s.top();
    s.pop();
    pushAtBottom(data,s);
    s.push(top);
}

int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    int data = 4;
    pushAtBottom(data, s);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}