//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    unordered_set<char>st;
	    string str = "";
	    for(int i =0;i<S.size();i++)
	    {
	        if(st.find(S[i])==st.end())
	        str +=S[i];
	        st.insert(S[i]);
	    }
	    return str;
	}
};
https://practice.geeksforgeeks.org/problems/remove-duplicates3034/1?page=1&difficulty[]=0&category[]=Strings&sortBy=submissions
