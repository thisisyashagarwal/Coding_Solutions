class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();
        int i,j = 0;
        for(i=0; i<m; i++)
            if( t[i] == s[j])
                j++;
        if( j == n)
            return 1;
        else
            return 0;
    }
};