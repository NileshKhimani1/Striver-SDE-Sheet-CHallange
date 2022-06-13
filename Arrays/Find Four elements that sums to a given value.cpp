#include <bits/stdc++.h> 

string fourSum(vector<int> arr, int target, int n) {
    unordered_map<int, pair<int, int>> mp;    // sum and indexes
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            mp[sum] = {i, j};
        }
    }
    
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int left = target - (arr[i] + arr[j]);        // target in map
            
            if(mp.find(left) != mp.end())
            {
                pair<int, int> it = mp[left];
                int k = it.first;
                int l = it.second;

                if(i != k && i != l && j != k && j != l)    // if sub diff hai
                    return "Yes";
            }
        }
    }
    return "No";
}
