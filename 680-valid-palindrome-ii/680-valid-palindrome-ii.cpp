class Solution 
{
public:
    bool validPalindrome(string s) 
    {
        int i = 0;
        int j = s.size()-1;
        int count = 0;
        
        while(i <= j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else 
            {
                i++;
                count++;
            }
        }
        int count1 = 0;
        i = 0;
        j = s.size()-1;
        while(i <= j)
        {
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else 
            {
                j--;
                count1++;
            }
        }
        if(count1 <= 1 || count <= 1)
            return true;
        else 
            return false;

    }
};
/*

class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.length();
        int count = 0;
        for( int i=0; i<=n/2; i++)
        {
            if( s[i] != s[n-i-1])
            {
                count++;
                if( count > 1)
                    return false;
            }
        }
        return true;
    }
};*/