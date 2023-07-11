//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	    int k =0;
	    int l = 1;
	    for(int i =1;i<s.size();i++)
	    {
	        if(s[k]==s[i])
	        {
	            k++;
	            continue;
	        }
	        i = l-1;
	        l++;
	        k=0;
	    }
	    return k;
	}
};
https://practice.geeksforgeeks.org/problems/longest-prefix-suffix2527/1?page=1&difficulty[]=1&category[]=Strings&sortBy=submissions
