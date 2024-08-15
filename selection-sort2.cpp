#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {13,46,24,52,20,9};
    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0; i<n-1; i++){
        int mini = i;
        for(int j = i; j<n; j++){
            if(a[j] < a[mini])
                mini = j;
        }
        swap(a[i],a[mini]);
    }

    for(int it : a)
        cout<<it<<"\t";
    
    return 0;
}