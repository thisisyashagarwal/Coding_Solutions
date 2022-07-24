class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    map<int,int>m;
    vector<int>res;
    for(auto x:nums)
        m[x]++;
    int n=nums.size();
    for(int i=1;i<=n;i++)
    {
        if(m.find(i)==m.end())
        res.push_back(i);
    }
    return res;
    }
};
    /*vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>v;
        int n = nums.size();
        int i;
        map<int,int>m;
        for(i=0;i<n; i++)
            m[nums[i]]++;
        // cout<<endl;
        // sort(nums.begin(), nums.end());
        i = 1;
        map<int,int>::iterator itr;
        for( itr = m.begin(); itr!= m.end(); itr++)
        {
            if( itr->first != i)
            //if( find( nums.begin(), nums.end(), i+1) == nums.end() )   //if( nums[i] != (i+1))
            {
                v.push_back(i);
                // cout<<nums[i]<<" "<<i<<" ";
            }
            i++;
        }
        cout<<v[0];
        if( m.size() != n-v.size())
        {
            for( ; i<=n; i++)
                v.push_back(i);
        }
        return v;
    }
};*/