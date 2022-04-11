class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        // if( n==1 && m==1)
        //     return grid;
        int p = n*m;
        int i,j,q = k;
        if( q>p)
            q = q%p; 
        vector<int>v(p);
        for(i=0; i<n; i++)
        {
            for( j=0; j<m; j++)
            {
                if( q >= p)
                    q = 0;
                v[q] = grid[i][j];
                q++;   
            }
        }
        
        q = 0;
        for(i=0; i<n; i++ )
        {
            for( j=0; j<m; j++)
            {
                grid[i][j] = v[q];
                q++;
            }
        }
        return grid;
    }
};