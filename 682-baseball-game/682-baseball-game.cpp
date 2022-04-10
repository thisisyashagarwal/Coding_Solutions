class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n = ops.size();
        vector<int>v(n);
        int i,j = 0;
        for( i = 0; i<n; i++)
        {
            if( ops[i] == "C")
                j--;
            else if( ops[i] == "D")
            {
                v[j] = ( 2* v[j-1]);
                j++;
            }
            else if( ops[i] == "+")
            {
                v[j] = ( v[j-1] + v[j-2]);
                j++;
            }
            else
            {
                v[j] = (stoi(ops[i]));
                j++;
            }
        }
        int sum = 0;
        for( i=0; i<j; i++)
        {
            cout<<v[i] <<" ";
            sum += v[i];
        }
        return sum;
    }
};