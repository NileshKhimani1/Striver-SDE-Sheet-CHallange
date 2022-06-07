#include <bits/stdc++.h> 

bool compare(vector<int> &a, vector<int> &b)
{
    return a[0] <= b[0];
}

vector<vector<int>> mergeIntervals(vector<vector<int>> &arr)
{
    int n = arr.size();
    if(n <= 1)
        return arr;
    sort(arr.begin(), arr.end(), compare);    // sort according to start time
    vector<vector<int>> ans;
    ans.push_back(arr[0]);
    
    for(int i = 1; i<n; i++)
    {
        int len = ans.size() - 1;
        int cs = ans[len][0];        // last ka start
        int ce = ans[len][1];        // last ka end
        
        if(ce < arr[i][0])        
            ans.push_back(arr[i]);
        else if(arr[i][1] < cs)
        {
            ans[len] = arr[i];
            ans.push_back({cs, ce});
        }
        else
            ans[len] = {min(cs, arr[i][0]), max(ce, arr[i][1])};
    }
    return ans;
}
