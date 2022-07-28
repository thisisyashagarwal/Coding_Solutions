// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int mid,first = 1, last = n,res = 0;
        bool a;
        while( first <= last)
        {
  //          cout<<mid<<" ";
            mid = (first+last)/2;
            a = isBadVersion(mid);
            if( a == false)// true)
                first = mid+1;
            else
            {
                res = mid;
                last = mid-1;
            }
        }
        return res;
    }
};