#include<bits/stdc++.h>
bool check(int n, int m, vector<int> arr, long long int mid)
{
    int cnt = 1;
    long long int tot = 0;
    for(int i=0; i<m; i++)
    {
        if(tot + arr[i] <= mid)
            tot += arr[i];

        else
        {
            cnt++;
            if(cnt>n || arr[i] > mid)
                return false;
            
            tot = arr[i];
        }
    }
    return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> arr) 
{    
    // Write your code here.
    long long l = 0;
    long long tot = 0;
    tot = accumulate(arr.begin(), arr.end(), tot);
    long long r = tot;
    long long ans = -1;
    while(l <= r)
    {
        long long mid = l + (r - l)/2;
        if(check(n, m, arr, mid))
        {
            ans = mid;
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return ans;
}
