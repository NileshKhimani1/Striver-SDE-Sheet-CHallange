#include<bits/stdc++.h>
double median(vector<int> a, vector<int> b)
{
    if(a.size() > b.size())
        return median(b, a);
        
    int n = a.size();
    int m = b.size();
    
    int l = 0, r = n;
    
    while(l <= r)
    {
        int c1 = (l + r) / 2;
        int c2 = (n + m + 1) / 2 - c1;
        
        int l1 = c1 == 0 ? INT_MIN : a[c1 - 1];        // if it's the left boundary for a
        int l2 = c2 == 0 ? INT_MIN : b[c2 - 1];        // same for b
        
        int r1 = c1 == n ? INT_MAX : a[c1];            // right boundary for a
        int r2 = c2 == m ? INT_MAX : b[c2];            // same for b
        
        if(l1 <= r2 and l2 <= r1)
        {
            if((n + m) % 2 == 0)                        // if even length
                return (max(l1, l2) + min(r1, r2)) / 2.0;
            else                                        // odd length
                return max(l1, l2) / 1.0;
        }
        else if(l1 > r2)                                // left vala chhota, right se bda ho
            r = c1 - 1;
        else
            l = c1 + 1; 
    }
    return 0.00;
}
