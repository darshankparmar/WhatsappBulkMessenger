#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    unordered_map<string, bool> mp;
    
    while(cin >> s)
    {
        mp[s] = true;
    }
    
    for(auto &x: mp)
    {
        cout << x.first << endl;
    } 
    
    return 0;
}
