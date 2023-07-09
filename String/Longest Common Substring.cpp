class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        int ans = 0;
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        for(int i =1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(S1[i-1]==S2[j-1])
                dp[i][j]= dp[i-1] [j-1] + 1;
                ans = max(dp[i][j],ans);
            }
        }
        return ans;
    }
};
https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1?page=1&difficulty[]=1&category[]=Strings&sortBy=submissions
