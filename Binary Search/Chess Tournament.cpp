#include<bits/stdc++.h>

bool check(int mid, int cows, vector<int> &arr)
{
    int placed = 1;
    int ind = arr[0];            // always place one cow at the first room
    for(int i = 1; i<arr.size(); i++)
    {
        if(arr[i] - ind >= mid)    // if next room's distance is affordable
        {
            placed++;
            ind = arr[i];
        }
        if(placed == cows)        // if placed all the cows
            return true;
    }
    return false;
}

int chessTournament(vector<int> arr , int n ,  int c){
    sort(arr.begin(), arr.end());            // sort the indexes
	int mx = *max_element(arr.begin(), arr.end());
    int mn = *min_element(arr.begin(), arr.end());
    
    int l = 1, r = mx - mn;        // min to max distance 
    int ans = 0;
    while(l <= r)
    {
        int mid = l + ((r - l) >> 1);
        if(check(mid,c,arr))        // check for the mid distance
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return ans;
}
