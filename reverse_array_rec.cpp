#include<bits/stdc++.h>
using namespace std;
int rev(vector<int> &arr, int l, int r){
    if(l>r) return 0;
    swap(arr[l],arr[r]);
    return rev(arr,l+1,r-1);
}

int main(){
    vector<int> arr = {1,2,3,4,2};
    int l = 0, r = arr.size()-1;
    rev(arr,l,r);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
