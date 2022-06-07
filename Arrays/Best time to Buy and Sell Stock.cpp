#include <bits/stdc++.h> 
int maximumProfit(vector<int> &arr){
    
    int ans = 0;
    int mn = arr[0];
    int n = arr.size();
    
    for(int i = 1; i<n; i++)
    {
        ans = max(ans, arr[i]-  mn);        // min buying price pe profit on ith
        mn = min(mn, arr[i]);               // min for next day prices
    }
    return ans;
}
