#include<bits/stdc++.h>
using namespace std;

vector<string> dna_sub_seq(string dna, int k){
    vector<string> ans;
    if(k<=0 || k>dna.size()) return ans;
    unordered_map<string,int> hmap;
    int maxfreq = 0;
    string tempstr;
    for(int i=0; i<=dna.size()-k; i++){
        tempstr = dna.substr(i,k);
        hmap[tempstr]++;
        maxfreq=max(maxfreq,hmap[tempstr]);
    }

    for(auto it : hmap){
        if(it.second == maxfreq) ans.push_back(it.first);
    }
    return ans;
}

int main(){
    string dna;
    vector<string> a;
    int k;
    cout<<"Enter DNA sequence : ";
    cin>>dna;
    cout<<"Enter length of subsequence : ";
    cin>>k;
    a = dna_sub_seq(dna,k);
    if(a.empty()) cout<<"Invalid window"<<endl;
    else{
        cout<<"Common DNA subsequence are : "<<endl;
        for(int i =0; i<a.size(); i++){
            cout<<a[i]<<endl;
        }
    }
    return 0;
}