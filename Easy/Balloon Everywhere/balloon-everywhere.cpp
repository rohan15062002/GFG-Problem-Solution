//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        map<char,int> m;
        
        for(auto it:s){
            if(it=='b' ||it=='a'||it=='l' ||it=='o'||it=='n' ){
                m[it]++;
            }
        }
        
        int mini=INT_MAX,mini1=INT_MAX;
        for(auto it:m){
            if(it.first=='b' ||it.first=='a' || it.first=='n'){
                mini=min(it.second,mini);
            }
            else{
                mini1=min(it.second/2,mini1);
            }
        }
        
        return min(mini,mini1);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends