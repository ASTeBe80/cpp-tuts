#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> dna_sub_seq(const string& dna, int k) {
    vector<string> ans;
    if (k <= 0 || k > dna.size()) { // Handling edge cases
        return ans;
    }

    unordered_map<string, int> hmap;
    int maxfreq = 0;
    
    // Traverse the string and calculate frequency of each subsequence of length k
    for (int i = 0; i <= dna.size() - k; i++) {
        string tempstr = dna.substr(i, k);
        hmap[tempstr]++;
        maxfreq = max(maxfreq, hmap[tempstr]); // Keep track of maximum frequency
    }

    // Collect all subsequences with the highest frequency
    for (auto& it : hmap) {
        if (it.second == maxfreq) {
            ans.push_back(it.first);
        }
    }

    return ans;
}

int main() {
    string dna;
    vector<string> a;
    int k;

    cout << "Enter DNA sequence: ";
    cin >> dna;

    cout << "Enter length of subsequence: ";
    cin >> k;

    a = dna_sub_seq(dna, k);

    if (a.empty()) {
        cout << "No valid subsequences or invalid input.\n";
    } else {
        cout << "Most frequent DNA subsequences are:\n";
        for (const string& subseq : a) {
            cout << subseq << endl;
        }
    }

    return 0;
}
