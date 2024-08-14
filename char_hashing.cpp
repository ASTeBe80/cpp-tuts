#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    //mapping
    int hash[26] = {0};  //because 26 letters
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a'] += 1;
    }

    //query
    int q;
    cin>>q;
    while(q--){
        char c;
        cin >> c;
        //fetch
        cout<< hash[c - 'a']<<endl;
    }
    return 0;
}