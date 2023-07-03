
class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        long ans = 0;
        for(int i=0;i<n;i++){
            if(a[i]=='1')
            ans++;
        }
        return (ans*(ans-1))/2;
    }

};
https://practice.geeksforgeeks.org/problems/binary-string-1587115620/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions
