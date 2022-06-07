vector<vector<int>> findTriplets(vector<int>arr, int n, int k) {
    vector<vector<int>> ans;
    if(n <= 2)
        return ans;
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i<n-2; i++)
    {
        if(i == 0 or (i>0 and arr[i] != arr[i-1]))
        {
            int tar = k - arr[i];            // nums[i] considered

            int l = i + 1, r = n - 1;

            while(l < r)
            {
                int tempSum = arr[l] + arr[r];      // for target sum
                if(tar == tempSum) // if equals the target, push it into the                                         answer
                {
                    vector<int> t;
                    t.push_back(arr[i]);
                    t.push_back(arr[l]);
                    t.push_back(arr[r]);
                    ans.push_back(t);
                    
           // to avoid the duplicated move l and r
                    while(l < r and arr[l+1] == arr[l])
                        l++;
                    while(l < r and arr[r-1] == arr[r])
                        r--;
                }
                if(tempSum <= tar)
                    l++;
                else
                    r--;
            }
        }
    }
    return ans;
}
