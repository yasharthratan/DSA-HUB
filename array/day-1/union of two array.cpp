class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  
    {
      //This approach is using unordered set.
    //   unordered_set<int> s;
    //   for(int i=0; i<n; i++)
    //   {
    //       s.insert(a[i]);
    //   }
    //   for(int i=0; i<m; i++)
    //   {
    //       s.insert(b[i]);
    //   }
    //   return s.size();
    int c=0;
    int N=1e6+1;//(10^6)
    int arr[N]={0};
    for(int i=0;i<n;i++)
    {
        arr[a[i]]=1;
    }
    for(int j=0;j<m;j++)
    {
        arr[b[j]]=1;
    }
    for(int k=0;k<N;k++)
    {
        if(arr[k]==1)
        {
            c++;
        }
    }
    return c;
    
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
