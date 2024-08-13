#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<char> str,int i,int n){
    if(i>n/2) return true;
    if(str[i] != str[n-i]) return false;
    return isPalindrome(str, i+1, n);
}

int main(){
    int i = 0;
    vector<char> str = {'a','b','c','b','a'};
    int n = str.size()-1;
    cout<<isPalindrome(str, i, n);
    return 0;
}
