#include<bits/stdc++.h>
using namespace std;

int sum=0;

int add(int n){
    if(n==0){
        return 0;
    }
    sum += n;
    add(n-1);
    return sum;
}

int main(){
    int n;
    cin>>n;
    int result = add(n);
    cout<<result;
    return 0;
}