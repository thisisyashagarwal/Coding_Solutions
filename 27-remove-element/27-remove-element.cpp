class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // vector<int>::iterator itr;
        // itr = remove( nums.begin(), nums.end(), val);
        
        int m = INT_MIN;
        int j = 0;
        for( int i = 0; i<nums.size(); i++)
        {
            if( nums[i] == val)
            {
                nums[i] = m;
                j++;
            }
        }
        sort( nums.begin(), nums.end(), greater<int>());
        return nums.size() - j;
        // cout<< nums[i];//.size();
        // return 3;;
    }
};