class Solution {
public:
    
    void print(int idx, vector<int> &v, vector<int>arr, int n, vector<vector<int>>&v1, int sum)
    {
        if( sum == 0)
        {
                // sort( v.begin(), v.end());
            v1.push_back(v);
            return;
        }
        
        for( int i= idx; i<n; i++)
        {
            if( i > idx && arr[i] == arr[i-1])
                continue;
            if( (arr[i]) > sum)
                break;
            v.push_back(arr[i]);
            // s += arr[i];
            print( i+1, v, arr, n, v1, sum- arr[i]);
            // s -= arr[i];
            v.pop_back();
        // print( idx+1, v, arr, n, v1, s, sum);
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        sort( candidates.begin(), candidates.end());
        vector<int>v;
        vector<vector<int>>v1;
        print( 0, v, candidates, n, v1, target);
        sort( v1.begin(), v1.end());
        vector<vector<int>>v2;
        map<vector<int>, int>m;
        
        for( int i=0; i<v1.size(); i++)
        {
            if( m.find( v1[i]) == m.end())
            {
                v2.push_back(v1[i]);
                m[v1[i]] = 1;
            }
        }
        
        return v2;
    }
};