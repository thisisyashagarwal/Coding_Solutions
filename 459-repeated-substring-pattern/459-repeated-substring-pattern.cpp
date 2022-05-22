class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for (int i = n / 2; i >= 1; i--) {
            if (n % i == 0) {
                int nums = n / i;
                string sub = s.substr(0, i);
                string str = "";
                for (int j = 0; j < nums; j++) {
                    str += sub;
                }
                
                if (str == s) return true;
            }
        }
        return false;
    }
    /*
        map<string, int>m;
        int n = s.length();
        int i,j;
        string str;
        for( j=2; j<n; j++)
        {
            for( i=0; i<n-j+1; i++)
            {
                str = s.substr( i, j);
                m[str]++;
            }
        }
        map<string, int>::iterator itr;
        for( itr = m.begin(); itr != m.end(); itr++)
        {
            if( itr->second > 1)
            {
                // cout<<itr->first<<" "<<itr->second<<" ";
                return true;
            }
        }
        return false;
    }*/
};