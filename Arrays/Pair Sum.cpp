#include<bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){
   	vector<vector<int>> ans;
    int n = arr.size();
    sort(arr.begin(), arr.end());        //    to get sorted pairs
    map<int,int> mp;
    for(int i = 0; i<n; i++)
    {
        if(mp.find(s - arr[i]) != mp.end())
        {
            for(int j = 0; j<mp[s-arr[i]]; j++)    // frqeuency
                ans.push_back({s-arr[i], arr[i]});
        }
        mp[arr[i]]++;
    }
    sort(ans.begin(), ans.end());        // sorted ans
    return ans;
}
