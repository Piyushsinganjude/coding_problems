    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
         vector<int>result;
        int max = a[n-1];
        result.push_back(max);
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=max)
            {
             result.push_back(a[i]);
             max = a[i];
            }
        }
        
        reverse(result.begin(),result.end());
        return result;
    }
    
        
};
Link = https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions
