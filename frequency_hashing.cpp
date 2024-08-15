#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    unordered_map<int,int> mpp;

    for(int i =0; i<n; i++){
        cin>>a[i];
        mpp[a[i]] += 1;
    }

    int max = 0, min = 0, Madd, madd;
    for(auto it : mpp){
        int maxadd = it.first;
        int maxval = it.second;
        if(it.second > max){
            Madd = it.first;
            max = it.second;
        }
        if(it.second < min){
            madd = it.first;
            min = it.second;
        }
    }

    
    return 0;
}