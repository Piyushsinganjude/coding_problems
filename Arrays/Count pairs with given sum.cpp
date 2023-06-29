//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int>mp;
        int ans = 0;
        for(int i =0;i<n;i++){
            int b = k - arr[i];
            if(mp[b]){
                ans += mp[b];
            }
            mp[arr[i]]++;
            }
            return ans;
        }
};
Link = https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions
