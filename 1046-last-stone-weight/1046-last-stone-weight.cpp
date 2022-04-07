class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        int n = nums.size();
        sort( nums.begin(), nums.end() );
        int i = n-1;
        int m = nums[i];
        while( i>0)
        {
            if( nums[i] == nums[i-1])
            {
                nums[i] = m;
                nums[i-1] = m;
                i -= 2;
            }
            else
            {
                nums[i-1] = abs( nums[i] - nums[i-1]);
                nums[i] = m;
                i -= 1;
            }
            for( int j=0; j<n; j++)
                cout<<nums[j]<<" ";
            cout<<"*\n";
            sort( nums.begin(), nums.end());
        }
        if( nums[0] == m && n>1)
            return 0;
        else
            return nums[0];
    }
};