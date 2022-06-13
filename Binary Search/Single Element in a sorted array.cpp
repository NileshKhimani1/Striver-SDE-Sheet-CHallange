int uniqueElement(vector<int> arr, int n)
{
    int l = 0, r = arr.size() - 2;  // aage bhi check karna pad sakta hai so
    while(l <= r)
    {
        int mid = l + ((r -l ) >> 1);

        if(arr[mid] == arr[mid ^ 1])        // if aage ya pichhe same ho
            l = mid + 1;
        else
            r = mid - 1;
    }
    return arr[l];
}
