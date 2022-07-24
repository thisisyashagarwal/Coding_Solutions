class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        int m = mat.size();
        int n = mat[0].size();
        
        int i = m - 1;
        int j = 0;
        
        while (i>=0 && j<n){
            
            if (mat[i][j] == target) return true;
            
            else if (mat[i][j] < target) j++;
            
            else i--;
        }
        return false;
        
    }
};

/*class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for( int i=0; i<matrix[0].size(); i++)
        {
            if( find( matrix[i].begin(), matrix[i].end(), target) != matrix.end())
                return true;
        }
        return false;
        
    }
};*/