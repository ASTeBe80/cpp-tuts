#include<bits/stdc++.h>
using namespace std;

int main(){
    //input
    int n;
    cin>>n;
    int arr[n];
    int atmax=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        atmax = max(atmax,arr[i]);
    }

    //precalculation
    int hash[atmax+1] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }

    //query
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        
        //fetch
        cout<<hash[num]<<endl;
    }
    

    return 0;
}