#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    map<int,int> mpp;
    for(int i=0; i<n; i++){
        cin>>a[i];
        mpp[a[i]] += 1;
    }

    for(auto it : mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    return 0;
}