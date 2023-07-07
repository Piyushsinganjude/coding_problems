class Solution{
public:
	bool commonSubseq (string a, string b)
	{
	    unordered_map<char,int>mp;
	    for(int i =0;i<a.size();i++)
	    mp[a[i]]++;
	    
	    for(int i =0;i<b.size();i++)
	    {
	        if(mp.find(b[i])!=mp.end())
	        return true;
	    }
	    return false;
	}
};
https://practice.geeksforgeeks.org/problems/common-subsequence4049/1?page=5&difficulty[]=0&category[]=Strings&sortBy=submissions
