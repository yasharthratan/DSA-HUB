class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
        int n=arr.size();
        int sum,ans=0;
        for(int i=0;i<n;i++)
        {
            int c=1;
            sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=arr[j];
                if(c%2!=0)
                {
                    ans+=sum;
                }
                c++;
            }
            
        }
        return ans;
        
    }
};
