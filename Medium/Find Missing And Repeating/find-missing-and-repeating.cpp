//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *a, int n) {
        // code here
        int i=0;
        while(i<n){
            if(a[i]!=a[a[i]-1]){
                swap(a[i],a[a[i]-1]);
            }
            else{
                i++;
            }
        }
        int * ans = new int[2];
        for(int i=0;i<n;i++){
            if(a[i]!=i+1){
                ans[0]=a[i];
                ans[1]=i+1;
                break;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends