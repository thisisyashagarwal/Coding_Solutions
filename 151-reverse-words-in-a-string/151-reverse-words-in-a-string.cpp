class Solution {
public:
    string reverseWords(string s) {
        string str = "";
        int n = s.length();
        vector<string>v;
        for( int i=0; i<n; i++)
        {
            if( s[i] == ' ')
            {
                if( str == " " || str == "")
                {}
                else
                    v.push_back(str);
                str = "";
            }
            else
                str += s[i];
        }
        if( str != "")
            v.push_back(str);
        str = "";
        for( int i = v.size()-1; i>0; i--)
        {
            str += v[i];
            str += ' ';
        }
        str += v[0];
        return str;
    }
};