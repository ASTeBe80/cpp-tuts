#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            arr.push_back(i);
            if(n/i != i)
                arr.push_back(n/i);
        }
    }
    
    if(arr.size()==2)
        cout<<true;
    else
        cout<<false;

    return 0;
}