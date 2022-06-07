vector<vector<int>> findTriplets(vector<int>arr, int n, int tar) {
    vector<vector<int>> ans;
    if(n <= 2)
        return ans;
    sort(arr.begin(), arr.end());
    for(int i = 0; i<n-2; i++)
    {
        if(i == 0 or (i > 0 and arr[i - 1] != arr[i]))
        {
            int sum = tar - arr[i];
            int l = i+1, r = n-1;
            while(l < r)
            {
                int t = arr[l] + arr[r];
                if(t == sum)
                {
                    vector<int> res(3, 0);
                    res[0] = arr[i];
                    res[1] = arr[l];
                    res[2] = arr[r];
                    ans.push_back(res);
                    while(l < r and arr[l] == arr[l+1])
                        l++;
                    while(l < r and arr[r] == arr[r-1])
                        r--;
                }
                if(t <= sum)
                    l++;
                else
                    r--;
            }  
        }
    }
    return ans;
}
