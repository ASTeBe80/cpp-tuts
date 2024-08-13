#include<bits/stdc++.h>
using namespace std;

int res(int n){
    if(n==0)
        return 0;
    return n + res(n-1);
}

int main(){
    int n;
    cin>>n;
    int ans = res(n);
    cout<<ans;
    return 0;
}
 