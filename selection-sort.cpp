#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int a[n] = {13,46,24,52,20,9};


    for(int i=0; i<n-1; i++){
        int min = a[i+1];
        int add = i+1;
        for(int j=i+1; j<n; j++){
            if(a[j] < min){
                min = a[j];
                add = j;
            }
        }
        swap(a[i] , a[add]);
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<"\t";
    }
}