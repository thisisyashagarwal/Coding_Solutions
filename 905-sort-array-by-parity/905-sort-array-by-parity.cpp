class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n,0);
        int i,k = 0, p = 0;
        for( i=0; i<n; i++)
        {
            if( nums[i] % 2 == 0)
                v[k++] = nums[i];
            else
            {
                v[n-p-1] = nums[i];
                p++;
            }
        }
        return v;
    }
};