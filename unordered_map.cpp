#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> m;
    unordered_map<char, int> um;

    string s = "abhishek";

// O(NLogN) - N for iteration and logN for insertion
    for(char c : s)
        m[c]++;

// O(N) -  N for iteration and O(1) for insertion
    for(char c : s)
        um[c]++;
}
