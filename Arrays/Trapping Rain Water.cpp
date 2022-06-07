#include <bits/stdc++.h> 
#include<bits/stdc++.h>
long getTrappedWater(long *arr, int n){
    vector<long> pref(n, 0), suff(n, 0);

    pref[0] = arr[0];
    suff[n - 1] = arr[n-1];

    for(int i = 1; i<n; i++)
        pref[i] = max(pref[i-1], arr[i]);
    for(int i = n-2; i>=0; i--)
        suff[i] = max(suff[i+1], arr[i]);

    long ans = 0;

    for(int i = 1; i<n-1; i++)
    {
        long mn = min(pref[i], suff[i]);
        if(mn >= arr[i])
            ans += mn - arr[i];
    }
    return ans;
}
