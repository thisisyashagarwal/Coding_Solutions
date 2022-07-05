class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort( nums.begin(), nums.end());
        int n = nums.size();
        if(n<2)
            return n;
        int count = -1,temp = 1,i,j;
        for( i=1; i<n; i++)
        {
            if( (nums[i] - nums[i-1]) == 1)
                temp++;
            else if( nums[i] - nums[i-1] == 0)
                continue;
            else
            {
                count = max(count, temp);
                temp = 1;
            }
        }
        if( count == -1 || temp > count)
            return temp;
        return count;
    }
};