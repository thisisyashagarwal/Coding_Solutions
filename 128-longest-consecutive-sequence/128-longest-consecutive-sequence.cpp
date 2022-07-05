class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort( nums.begin(), nums.end());
        int n = nums.size();
        if(n<2)
            return n;
        int count = -1,temp = 1,i,j;
        // cout<<n;
        for( i=1; i<n; i++)
        {
            if( (nums[i] - nums[i-1]) == 1)
                temp++;
            else if( nums[i] - nums[i-1] == 0)
                continue;
            else
            {
                if( count < temp)
                    count = temp;
                // count = max(count, temp);
                temp = 1;
            }
            cout<<temp<<" "<<count<<" "<<i;
        }
        // cout<<temp<<" "<<count<<" "<<i;
        if( count == -1 || temp > count)
            return temp;
        return count;
    }
};

// [0,3,7,2,5,8,4,6,0,1