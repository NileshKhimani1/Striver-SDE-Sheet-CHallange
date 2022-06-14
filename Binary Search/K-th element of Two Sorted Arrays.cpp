#include<bits/stdc++.h>
int ninjaAndLadoos(vector<int> &arr1, vector<int> &arr2, int n, int m, int k) {
    if(n > m)
        ninjaAndLadoos(arr2, arr1, m, n, k);    // small aray first

    int l =  max(0, k - m), r = min(n, k);     // search space
    // if k > n them k - m = low,        //n = high
    while(l <= r)
    {
        int c1 = l + ((r - l) >> 1);    // picked c1 from the arr1
        int c2 = k - c1;                // k - c1 from the arr2

        int l1 = c1 == 0 ? INT_MIN : arr1[c1 - 1];    // if 0 then min
        int l2 = c2 == 0 ? INT_MIN : arr2[c2 - 1];

        int r1 = c1 == n ? INT_MAX : arr1[c1];        // if exceeds then max
        int r2 = c2 == m ? INT_MAX : arr2[c2];

        if(l1 <= r2 and l2 <= r1)            // if sorted...return the max
            return max(l1, l2);
        else if(l1 > r2)            // if pehle ka last, second k min se badha..
            r = c1 - 1;            // go left
        else
            l = c1 + 1;
    }
    return 1; 
}
