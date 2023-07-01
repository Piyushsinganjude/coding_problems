class Solution{
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
         if(n == 0)
            return 0;
        long long sum=0, maxsum=LLONG_MIN;
        for(int i=0 ; i<n ; i++){
            sum += arr[i];
            if(sum>maxsum){
                maxsum=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxsum;
    }
};
LINK = https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1?page=1&difficulty[]=1&sortBy=submissions
