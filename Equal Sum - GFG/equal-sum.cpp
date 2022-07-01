// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(int *arr, int n) {
        // code here
        int sum = 0;
        sum = accumulate(arr, arr + n, sum);
        // cout<<sum;
        int s_left = 0;
        
        for( int i=1; i<n; i++ )
        {
            s_left += arr[i-1];
            // sum -= ( s_left + arr[i] );
            // cout<<s_left<<" "<<sum<<endl;
            if( s_left == ( sum - s_left - arr[i] ) )
                return "YES";
        }
        return "NO";
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends