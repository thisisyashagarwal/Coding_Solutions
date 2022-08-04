class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx1, idx2;
        for( int i=n-2; i>=0; i--)
        {
            if( nums[i] < nums[i+1])
            {
                idx1 = i;
                break;
            }
        } 
        if( idx1 < 0)
            reverse( nums.begin(), nums.end());
        else
        {
            for( int i=n-1; i>=0; i--)
            {
                if( nums[i] > nums[idx1])
                {
                    idx2 = i;
                    break;
                }
            }
            swap( nums[idx1], nums[idx2]);
            int k = 0;
            reverse( nums.begin() + idx1  +1, nums.end());
            // for( int i=idx1+1; i<n-idx1+1; i++)
            // {   
            //     int temp = nums[i];
            //     nums[i] = nums[n-1-k];
            //     nums[n-1-k] = temp;
            //     k++;
            // }
//          reverse( nums.begin(), nums.end());
        }
    }
};