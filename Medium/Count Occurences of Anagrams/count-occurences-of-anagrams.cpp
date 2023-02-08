//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string p, string s) {
	   vector<int> hash(26,0);
	   vector<int> phase(26,0);
	    
	    int left=0,right=0;
	    int len = s.size();
	    int win = p.size();
	    int cnt=0;
	    if(win>len)return cnt;
	    while(right<win){
	        phase[p[right]-'a']++;
	        hash[s[right]-'a']++;
	        right++;
	    }
	    
	    right--;
	    
	    while(right<len){
	        if(right-left+1==win){
	            if(hash==phase)cnt++;
	            hash[s[left]-'a']--;
	            left++;
	        }
	        right++;
	        
	        if(right!=len){
	            hash[s[right]-'a']++;
	        }
	    }
	    return cnt;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends