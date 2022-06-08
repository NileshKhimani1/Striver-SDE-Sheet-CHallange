#include<bits/stdc++.h>
int longestSubSeg(vector<int> &arr , int n, int k){
    
    int cnt = 0;
    int ans = INT_MIN;
    
    int i = 0, j = 0;
    
    while(j < n)
    {
        if(arr[j] == 0)        // count the zeros till k
            cnt++;
        
        if(cnt == k+1)        // count ek badh gaya hai to kam karna hai
        {
            ans = max(ans, j - i);    // first calculation the ans till curr
            while(cnt != k)            // jab tak k na ho
            {
                while(arr[i] != 0)    //zero hoga to kam hoga
                    i++;
                if(arr[i] == 0)        //kam kiya
                {
                    cnt--;
                    i++;
                }
            }
        }
        j++;
    }
    ans = max(ans, j - i);         // final ans to be calculated
    return ans;
}
