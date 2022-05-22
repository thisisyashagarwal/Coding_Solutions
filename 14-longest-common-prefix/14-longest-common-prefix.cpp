class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(), strs.end()); 
        
        int n = strs.size();
        string s=strs[0]; 
        string s1=strs[n-1]; 
        string ans="";
        int i;
        for( i = 0; i < s.size(); i++) 
        {
            if(s[i] == s1[i]) 
                ans += s[i]; 
            else
                break; 
        }
        return ans; 
}
        /*
        int n = str.size();
        int i,j;
        string s = "";
        for( j=0; j<min( str[0].length(), str[1].length()); j++)
        {
            if( str[0][j] == str[1][j])
                s += (str[1][j]);
        }
        string s1 = "";
        for( j=0; j<min( s.length(), str[2].length()); j++)
        {
            if( str[2][j] == s[j])
                s1 += (str[2][j]);
        }
        
        return s1;
    }*/
};