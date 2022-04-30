// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	vector<int>SolveQueris(string str, vector<vector<int>>Query){
	    // Code here
	    int i, j = 0;
	    int n = Query.size();
	    vector<int>v;
	    for( j=0; j<n; j++)
	    {
	        map<char, int>m;
	        for( i = Query[j][0]; i<=Query[j][1]; i++)
	        {
	            m[str[i-1]]++;
	        }
	        map<char,int>::iterator itr;
	       // for(itr = m.begin(); itr != m.end(); itr++)
	       //     cout<<itr->first<<" "<<itr->second<<endl;
	       //cout<<"**";
	        v.push_back(m.size());
	    }
	    
	    return v;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		int q;
		cin >> q;
		vector<vector<int>>Query;
		for(int i = 0; i < q; i++){
			int l, r;
			cin >> l >> r;
			Query.push_back({l, r});
		}
		Solution obj;
		vector<int> ans = obj.SolveQueris(str, Query);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends