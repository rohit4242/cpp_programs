// This problem is to implement disjoint set union. There will be 2 incomplete functions namely union and find. You have to complete these functions. 

// Union: Join two subsets into a single set.
// isConnected: Determine which subset a particular element is in. This can be used for determining if two elements are in same subset.

// Example 1:

// Input:
// N = 5
// q = 4
// Queries = 
// Union(1,3)
// isConnected(1,2)
// Union(1,5)
// isConnected(3,5)
// Output:
// 0
// 1
// Explanation: Initially all nodes 1 2 3 4 5
// are not connected. 
// After Union(1,3), node 1 and 3 will be
// connected.
// When we do isConnected(1,2),  as node 1
// and 2 are not connected it will return 0.
// After Union(1,5), node 1 and 5 will be
// connected.
// When we do isConnected(3,5),  as node
// 1 and 3 are connected, and node 1 and 5
// are connected, hence 3 and 5 are
// connected. Thus it will return 1.
// Example 2:

// Input:
// N = 5
// q = 4
// Queries = 
// Union(1,4)
// Union(1,5)
// isConnected(2,3)
// Union(3,4)
// Output: 0
// Your Task:

// You have to complete the function union_() which merges the node1 and node2. You will also have to complete the function isConnected() which will return whether the two nodes are connected.

// Note: Both function will contain two arrays par[] and ranks1[] along with two nodes. Initially par[i] = i and rank1[i] = 1 

// Expected Time Complexity: O(N + Q).
// Expected Auxiliary Space: O(1).

// Constraints: 
// 1 <= N <= 105
// 1<= Q <= 105
// 1 <= node1, node2 <= N

// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to merge two nodes a and b.
    void union_( int a, int b, int par[], int rank1[]) 
    {
        //code here
		int x = find_(a, par);
		int y = find_(b, par);
		if(x == y)
			return;
		if(rank1[x] > rank1[y])
			par[y] = x;
		else
		{
			par[x] = y;
			if(rank1[x] == rank1[y])
				rank1[y]++;

		}
    }
    
    //Function to check whether 2 nodes are connected or not.
    bool isConnected(int x,int y, int par[], int rank1[])
    {
        //code here
		int x_ = find_(x, par);
		int y_ = find_(y, par);
		if(x_ == y_)
			return true;
		return false;

    }

	int find_(int x, int par[])
	{
		if(par[x] == x)
			return x;
		return find_(par[x], par);
	}
	
};

// { Driver Code Starts.

int main() {
    //taking number of testcases
    int t;
    cin>>t;
    while(t--) {
        
        //taking number of elements
        int n;
        cin>>n;
        
        
        int par[n+1];
        int rank1[n+1];

        //initializing the parent and
        //the rank array
        for(int i=1; i<=n; i++) {
            par[i] = i;
            rank1[i] = 1;
    }
    
    //taking number of queries
    Solution obj;
    int q;
    cin>>q;
    while(q--) {    
        int a,b;
        char c;
        cin>>c>>a>>b;
        
        //if query type is 'U'
        //then calling union_ method
        if(c=='U')
        {
            obj.union_(a,b, par, rank1);
        }
        else//else calling isConnected() method
        cout<<obj.isConnected(a,b, par, rank1)<<endl;
    }
    }
    return 0;
}
  // } Driver Code Ends