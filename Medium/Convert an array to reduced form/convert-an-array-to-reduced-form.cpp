//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	int search(int arr[],int n,int target){
	    int low=0,high=n-1;
	    int mid;
	    
	    while(low<high){
	        mid = low+(high-low)/2;
	        
	        if(arr[mid]==target)return mid;
	        else if(arr[mid]>target)high=mid-1;
	        else low=mid+1;
	    }
	    return low;
	}
	void convert(int arr[], int n) {
	    // code here
	    int a[n],ans[n];
	    for(int i=0;i<n;i++){
	        a[i]=arr[i];
	    }
	    
	    sort(a,a+n);
	    
	    for(int i=0;i<n;i++){
	        int x = search(a,n,arr[i]);
	        ans[i]=x;
	    }
	    
	    for(int i=0;i<n;i++){
	        arr[i]=ans[i];
	    }
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends