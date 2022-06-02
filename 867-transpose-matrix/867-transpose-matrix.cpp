class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i,j;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> ans(m, vector<int>(n,0));
        for( i=0; i<n; i++)
        {
            for( j = 0; j<m; j++)
            {
                ans[j][i] = matrix[i][j];
                // [i][j] = matrix[j][i];
                // matrix[j][i] = temp;
            }
        }
        return ans;
    }
};