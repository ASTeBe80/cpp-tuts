#include<bits/stdc++.h>
using namespace std;

int print(int b, int a){
    if(b<a)
        return 0;
    cout<<b<<endl;
    print(b-1, a);
}

int main(){
    int a = 1, b=4;
    print(b,a);
    return 0;
}