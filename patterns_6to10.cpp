#include<iostream>
using namespace std;

void six(){
    int j;
    for(int i=5; i>0; i--){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
}

void seven(){
    int j;
    int n=9;
    int limit=(9/2)+1;
    for(int i=0; i<5; i++){
        for(j=limit; j<n && j<=j + (2*i); j++){
            cout<<"*";
        }
        limit=limit-1;
        cout<<endl;
    }
}

int main(){
    six();
    seven();
}