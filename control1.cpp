#include<iostream>
using namespace std;

//WAP to find adult or not

int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"Minor"<<endl;
    }
    else{
        cout<<"Adult"<<endl;
    }
    return 0;
}