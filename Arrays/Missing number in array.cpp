
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int sum = 0;
        int r = n*(n+1)/2;
        for(int i=0;i<n-1;i++){
            sum += array[i]; 
        }
        return r - sum;
    }
};
Link = https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions
