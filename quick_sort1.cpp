#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot=arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]>=pivot && i<high){
            i++;
        }
        while(arr[j]<=pivot && j>low){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high){
    if(low<high){
        int pivot = partition(arr, low, high);
        qs(arr,low,pivot-1);
        qs(arr,pivot+1,high);
    }
}

void input(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void output(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    input(arr,n);
    qs(arr,0,n-1);
    output(arr,n);
    return 0;
}