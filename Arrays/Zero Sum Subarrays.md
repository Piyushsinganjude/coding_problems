//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        unordered_map<long long int, int> mp;
        long long int sum = 0;
        long long int ans = 0;
        mp[0] = 1;
        for(int i =0;i<n;i++)
        {
            sum += arr[i];
            if(mp.find(sum)!=mp.end()){
                ans += mp[sum];
            }
            mp[sum]++;
        }
        return ans;
    }
};
https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1?page=2&difficulty[]=1&category[]=Arrays&sortBy=submissions
