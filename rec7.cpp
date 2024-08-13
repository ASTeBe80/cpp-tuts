#include<bits/stdc++.h>
using namespace std;

int result(int i, int sum){
    if(i<1){
        cout<<sum;
        return 0;
    }
    result(i-1,sum+i);
}

int main(){
    int n;
    cin>>n;
    result(n,0);
    return 0;
}
