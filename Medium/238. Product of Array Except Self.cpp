vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size(), ans = 1, j = 0;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
            j++;
        else
            ans *= nums[i];
    }
    // if more than one zero automatically our ans will be 0
    if (j > 1)
        return v;
    //  if only one occurence then only at that one occurence we will have ans and rest all 0
    //  check for zeroes in this loop and then decide ans
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
            v[i] = ans; // direct assign
        else
        {
            if (j == 0) // count of 0 is 0 so normal divide
                v[i] = ans / nums[i];
            else
                v[i] = 0;
        }
    }
    return v;
}
