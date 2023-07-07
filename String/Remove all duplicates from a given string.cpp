class Solution{
public:
	string removeDuplicates(string str) {
	    unordered_map<char,int>mp;
	    for(int i=0;i<str.size();i++)
	    mp[str[i]]++;
	    string ans ="";
	    for(int i =0;i<str.size();i++){
	        if(mp[str[i]]>=1){
	            ans+=str[i];
	            mp[str[i]]=0;
	        }
	    }
	    return ans;
	}
};
https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1?page=1&difficulty[]=0&category[]=Strings&sortBy=submissions
