//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
public:
bool isPrime(int n)
{
  
    if (n <= 1)  return false;
    if (n <= 3)  return true;
 
    if (n%2 == 0 || n%3 == 0) return false;
   
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
   
    return true;
}
int nextPrime(int N)
{

    if (N <= 1)
        return 2;
 
    int prime = N;
    bool found = false;
 
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}
int nextPrime1(int N)
{

    if (N <= 1)
        return 2;
 
    int prime = N;
    bool found = false;
 
    while (!found) {
        prime--;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}
    Node *primeList(Node *head){
        Node* curr=head;
        vector<int> v;
        
        while(curr){
            if(isPrime(curr->val)==true){
                v.push_back(curr->val);
            }
            else{
            int x = nextPrime(curr->val);
            int y = nextPrime1(curr->val);
            //cout<<x<<" "<<y<<" "<<min(x,y)<<endl;
            int diff1=abs(curr->val-x);
            int diff2=abs(curr->val-y);
            
            if(diff1==diff2){
               v.push_back(min(x,y)); 
            }
            else if(diff1<diff2){
                v.push_back(x);
            }else v.push_back(y);
        }
        curr=curr->next;
    }
    
    Node* curr1=head;
    int i=0;
    while(i<v.size() && curr1){
        curr1->val=v[i];
        //curr=curr->next;
        i++;
        curr1=curr1->next;
    }
    return head;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends