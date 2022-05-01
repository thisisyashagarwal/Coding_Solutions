// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
public:
    long long int killinSpree(long long int n)
    {
        // Code Here
        long long i,j;
        // cout<<sqrt(n)<<endl;
        for(i=1; i<=sqrt(n)+1; i++)
        {
            j = ( i * (i+1) * ((2*i)+1))/6;
            // cout<<j<<" ";
            if( j > n)
                return i-1;
        }
        // cout<<"";
        return i;
    }
    
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        Solution obj;
        long long int ans = obj.killinSpree(n);
        cout<<ans<<"\n";
    }
    return 0;
}
  // } Driver Code Ends