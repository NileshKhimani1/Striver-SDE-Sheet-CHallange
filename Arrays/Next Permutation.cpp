#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &arr, int n)
{
    if(n == 1)
        return arr;
    int ind = -1;    
    for(int i = n - 2; i>=0; i--)        // next smaller element
    {
        if(arr[i] < arr[i+1])
        {
            ind = i;
            break;
        }
    }
    
    if(ind == -1)
    {
        reverse(arr.begin(), arr.end());
        return arr;
    }
    int ind2 = -1;            
    for(int i = n-1; i>=0; i--)
    {
        if(arr[i] > arr[ind])     // next bada element iski position lega
        {
            ind2 = i;
            break;
        }
    }
    swap(arr[ind], arr[ind2]);    // swap them
    reverse(arr.begin() + ind + 1,arr.end());    // reverse after things
    return arr;
}
