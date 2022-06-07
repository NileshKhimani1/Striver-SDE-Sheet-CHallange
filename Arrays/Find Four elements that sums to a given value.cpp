#include <bits/stdc++.h> 

string fourSum(vector<int> arr, int s, int n) {
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i<n-3; i++)
    {
        for(int j = i+1; j<n-2; j++)
        {
            int tar = s - arr[i] - arr[j];
            int l = j+1, r = n-1;
            
            while(l < r)
            {
                int temp = arr[l] + arr[r];
                if(temp == tar)
                    return "Yes";
                else if(temp < tar)
                    l++;
                else
                    r--;
            }
        }
    }
    return "No";
}
