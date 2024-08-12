#include<bits/stdc++.h>
using namespace std;

int print(int a, int b){
    if(a>b)
        return 0;
    print(a+1, b);
    cout<<a<<endl;
}

int main(){
    int a = 1, b =4;
    print(a,b);
    return 0;
}
