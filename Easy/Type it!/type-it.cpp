//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
        // code here
         int n = s.size();
         if(n<=3)return n;
        int ans=INT_MAX;
        int cnt=0;
        string str="";
        
        for(int i=0;i<n;i++){
            str += s[i];
            string temp = s.substr(i+1,str.size());
            
            if(str==temp){
               cnt=i;
            }
            
        }
        
        
        return n-cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends