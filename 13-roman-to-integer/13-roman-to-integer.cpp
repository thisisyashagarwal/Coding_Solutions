class Solution {
public:
    
    int value( char ch)
    {
        switch(ch)
        {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return -1;
    }
    int romanToInt(string s) {
        int n = s.length();
        int i, sum = 0;
        for( i=0; i<n; i++)
        {
            int s1 = value(s[i]);
            if(i+1 < s.length())
            {
                int s2 = value(s[i+1]);
                if(s1 >= s2)
                    sum = sum + s1;
                else
                {
                    sum = sum + s2 - s1;
                    i += 1;
                }
            }
            else
                sum = sum + s1;
        }
        return sum;
    }
    
};