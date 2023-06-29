/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> mp;
        int sum = 0;
        int ans = 0;
        mp[0] = -1;
        for(int i =0;i<n;i++)
        {
            sum += A[i];
            if(mp.find(sum) != mp.end()){
                ans = max(ans,i-mp[sum]);
            } else {
                mp[sum] = i;
            }
        }
        return ans;
        
    }
};
Link = https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions
