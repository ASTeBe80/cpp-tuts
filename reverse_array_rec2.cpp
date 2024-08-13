#include<bits/stdc++.h>
using namespace std;

int rev(vector<int> &arr, int i){
    int n = arr.size()-1;
    if(i>arr.size()/2) return 0;
    swap(arr[i],arr[n-i]);
    return rev(arr, i+1);
}

int main(){
    int i=0;
    vector<int> arr={1,2,3,4,2};
    rev(arr,i);
    for(int j=0; j<arr.size(); j++){
        cout<<arr[j]<<"\t";
    }
    return 0;
}
