#include<bits/stdc++.h>
int getMedian(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    
    int mn = INT_MAX, mx = INT_MIN;
    
    for(int i = 0; i<n; i++)
    {
        mn = min(mn, arr[i][0]);
        mx = max(mx, arr[i][m-1]);
    }
    
    int tarInd = (n * m + 1) / 2;
    
    while(mn < mx)
    {
        int mid = mn + ((mx - mn) >> 1);
        
        int cntLess = 0;
        
        for(int  i = 0; i<n; i++)
            cntLess += upper_bound(arr[i].begin(), arr[i].end(), mid) - arr[i].begin();
        
        if(tarInd <= cntLess)
            mx = mid ;
        else
            mn = mid + 1;
    }
    return mn;
}
