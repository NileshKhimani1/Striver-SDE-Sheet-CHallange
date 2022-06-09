#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &arr)
{
	int n = arr.size();
    int m = arr[0].size();
    
    bool col0 = false;
    
    for(int i = 0; i<n; i++)
    {
        if(arr[i][0] == 0)
            col0 = true;
        for(int j = 1; j<m; j++)
        {
            if(arr[i][j] == 0)
            {
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }
    }
    
    for(int i = n-1; i>=0; i--)
    {
        for(int j = m-1; j>=1; j--)
        {
            if(arr[i][0] == 0 or arr[0][j] == 0)
                arr[i][j] = 0;
        }
        if(col0)
            arr[i][0] = 0;
    }
    
}
