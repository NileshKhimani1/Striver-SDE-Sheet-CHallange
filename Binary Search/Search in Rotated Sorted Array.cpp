int search(int* arr, int n, int tar) {
    int l = 0, r = n - 1;
    
    while(l <= r)
    {
        int mid = l + ((r - l) >> 1);
        
        if(arr[mid] == tar)
            return mid;
        if(arr[l] <= arr[mid])
        {
            if(arr[l] <= tar and tar <= arr[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        else
        {
            if(arr[mid] <= tar and tar <= arr[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    return -1;
}
