//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string s, int n)
    {
        // your code here
        string s1="";
        string s2="";
        
        for(auto it:s){
            if(it>='a' && it<='z'){
                s1+=it;
            }
            else{
                s2+=it;
            }
        }
        
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        int j=0,k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=s1[j];
                j++;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                s[i]=s2[k];
                k++;
            }
        }
        
        return s;
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends