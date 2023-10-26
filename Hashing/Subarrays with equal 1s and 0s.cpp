class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
          unordered_map <int ,int > mp;
          int sum = 0;
          long long ans = 0;
          mp[0] = 1;
          for(int i =0;i<n;i++)
          {
              if(arr[i] == 0){
                  sum -= 1;
              }else {
                  sum +=1;
              }
              if(mp.find(sum) != mp.end()){
                  ans += mp[sum];
                  mp[sum]++;
              } else {
                  mp[sum]=1;
              }
          }
          return ans;
    }
};
