//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User Function Template for C++ solution

class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &a, int n){
        // Your code here
        stack<long long> s;
        vector<long long> v;
        
        s.push(a[n-1]);
        v.push_back(-1);
        for(int i=n-2;i>=0;i--){
            while(!s.empty() && s.top()<=a[i]){
                s.pop();
            }
            if(s.empty()==true){
                v.push_back(-1);
            }
            else if(a[i]<s.top()){
                v.push_back(s.top());
            }
            s.push(a[i]);
        }
        reverse(v.begin(),v.end());
        return v;
       
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution ob;
        
        vector <long long> res = ob.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends