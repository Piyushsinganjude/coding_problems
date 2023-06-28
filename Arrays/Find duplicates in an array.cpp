class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector <int> ans;
        for(int i =0;i<n;i++)
        {
            int index = arr[i]%n;
            arr[index]+=n;
        }
        for(int i =0;i<n;i++)
        {
            if((arr[i]/n)>=2){
              ans.push_back(i);
            }
        }
        if(ans.size()==0) return {-1};
        return ans;
    }
};
Link = (https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions)
