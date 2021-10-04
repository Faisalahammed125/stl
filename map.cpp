#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> m1, m2;
    map<char, int> mChar;
    string name = "abhishek";

// map initialization with key and value pairs
// SYNTAX - map<data_type, data_type> map_name = {{key1, value1}, {key2, value2}, ...};
    map<int, int> m = {{1,2}, {2,5}, {3,7}, {4,8}};

// method 1 to insert elements in maps
    m1.insert(make_pair(1,10));
    m1.insert(make_pair(2,20));
    m1.insert(make_pair(3,30));

    for(auto x : m1)
        cout<<x.first<<" "<<x.second<<endl;

// method 2 to insert elements in maps

    m2[100] = 1;
    m2[200] = 2;
    m2[300] = 3;

    for(auto x : m2)
        cout<<x.first<<" "<<x.second<<endl;

    for(auto x : name)
        mChar[x]++;
    for(auto x : mChar)
        cout<<x.first<<" "<<x.second<<endl;

    cout<<"h count in abhishek is "<<mChar['h']<<endl;
}
