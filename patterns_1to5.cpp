#include<iostream>
using namespace std;

void one(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

void two(){
    for(int i=0; i<5; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

void three(){
    int count;
    for(int i=0; i<5; i++){
        count=1;
        for(int j=0; j<=i; j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    cout<<endl;
}

void four(){
    int count=1;
    for(int i=0; i<5; i++){
        for(int j=0; j<=i; j++){
            cout<<count;
        }
        cout<<endl;
        count++;
    }
    cout<<endl;
}

void five(){
    int j;
    for(int i=5; i>0; i--){
        for(j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    one();
    two();
    three();
    four();
    five();
}