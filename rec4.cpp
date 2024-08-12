#include<bits/stdc++.h>
using namespace std;

int print(int a, int b){
    if(a<1)
        return 0;
    print(a-1,b);
    cout<<a<<endl;
}

int main(){
    int a = 3, b = 3;
    print(a,b);
    return 0;
}