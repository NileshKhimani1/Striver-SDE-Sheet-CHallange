void sort012(int *arr, int n)
{
    int o = 0, t = n-1;
    int on = 0;
    
    while(on <= t)
    {
        if(arr[on] == 0)
            swap(arr[o++], arr[on++]);
     
        else if(arr[on] == 2)
            swap(arr[on], arr[t--]);
        else
            on++; 
    }
}
