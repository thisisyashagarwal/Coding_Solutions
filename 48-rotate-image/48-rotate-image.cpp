class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>v;
        
        for(int i=0;i<matrix.size();i++){
            vector<int>helper;
            for(int j=matrix.size()-1;j>=0;j--){
                helper.push_back(matrix[j][i]);
            }
            v.push_back(helper);
        }
        matrix.clear();
        for(auto i:v){
            matrix.push_back(i);
        }
    }
};