class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        if( (find( nums.begin(), nums.end(), target) == nums.end() ) || nums.size() == 0)
        {
            v.push_back(-1);
            v.push_back(-1);
            return v;
        } 
        int i,a = -1, b = -1;
        for( i=0; i<nums.size(); i++)
        {
            if( nums[i] == target && a == -1)
                a = i;
            else if( nums[i] > target && b == -1)
            {
                b = i-1;
                break;
            }
        }
        v.push_back(a);
        if( b == -1 && i == nums.size())
            b = i-1;
        v.push_back(b);
        return v;
    }
};