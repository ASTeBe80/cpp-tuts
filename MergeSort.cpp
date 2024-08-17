#include<bits/stdc++.h>
using namespace std;

void input(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void output(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
}

void mergeit(int arr[], int low, int mid, int high){
    int left = low;
    int right = mid+1;
    vector<int> ans;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            ans.push_back(arr[left]);
            left++;
        }
        else{
            ans.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        ans.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        ans.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        arr[i] = ans[i-low];
    }
}

void mS(int arr[], int low, int high){
    if(low==high) return;
    int mid = low + (high-low)/2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    mergeit(arr,low,mid,high);
}

int main(){
    int n;
    cout<<"Enter number of elements :  ";
    cin>>n;
    int low = 0;
    int high = n-1;
    int arr[n];
    input(arr,n);
    mS(arr,low,high);
    output(arr,n);
    return 0;
}