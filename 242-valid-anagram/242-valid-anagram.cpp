class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int>m1,m2;
        for( int i=0; i<s.length(); i++)
            m1[s[i]]++;
        for( int i=0; i<t.length(); i++)
            m2[t[i]]++;
        if( t.length() < s.length())
            return false;
        map<char,int>::iterator itr;
        for(itr = m2.begin(); itr!= m2.end(); itr++)
        {
            if(m1.find(itr->first) != m1.end())
            {
                if( itr->second < m1[itr->first])
                    return false;
            }
            else 
                return false;
        }
        return true;
    }
};