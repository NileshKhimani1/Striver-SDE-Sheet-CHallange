#include <bits/stdc++.h> 
bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int tar) {
    int l = 0, r = m*n - 1;
    
    while(l <= r)
    {
        int mid = l + ((r - l) >> 1);
        
        int temp = mat[mid / n][mid % n];
        
        if(temp == tar)
            return true;
        if(temp < tar)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return false;
}
