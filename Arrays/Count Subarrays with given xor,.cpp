#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int tar)
{
    int n = arr.size();
    map<int,int> mp;
    mp[0] = 1;                          // starting me ye possible hai
    int ans = 0;
    int curr = 0;
    
    for(int i = 0; i<n; i++)
    {
        curr ^= arr[i];
        int newTar = tar ^ curr;        // we should count this
        if(mp.find(newTar)!=mp.end())   // if we have this, add them to the ans
            ans += mp[newTar];
        mp[curr]++;                     // curr ko add kar do
    }
    return ans;
}
