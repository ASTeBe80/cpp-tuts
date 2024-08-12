#include<bits/stdc++.h>
using namespace std;

int print(int i,int n){
    if(i>n)
        return 0;
    cout<<"Name"<<endl;
    print(i+1,n);
}

int main(){
    int i,n;
    i = 1;
    n = 4;
    print(i, n);
    return 0;
}