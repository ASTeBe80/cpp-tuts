#include<iostream>
using namespace std;

//WAP to find adult or not

int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"Adult"<<endl;
    }
    else{
        cout<<"Minor"<<endl;
    }
    return 0;
}