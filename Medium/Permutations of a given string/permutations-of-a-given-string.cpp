//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void solve(int index,int n,map<int,bool> m,string s,string st,set<string>&ans){
	        
	        if(n==st.size()){
	            ans.insert(st);
	            return;
	        }
	        
	        for(int i=0;i<n;i++){
	            if(m[i]==true)continue;
	            m[i]=true;
	            st+=s[i];
	            
	            solve(0,n,m,s,st,ans);
	            
	            m[i]=false;
	            st.pop_back();
	            
	        }
	    }
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    set<string> ans;
		    string st="";
		    
		    map<int,bool>m;
		    solve(0,s.size(),m,s,st,ans);
		    
		    vector<string> v(ans.begin(),ans.end());
		    return v;
		    
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends