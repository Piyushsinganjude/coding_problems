class Solution
{
  public:
    char firstRep (string s)
    {
        unordered_map<char,int> mp;
        for(int i =0;i<s.size();i++)
        mp[s[i]]++;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]>1)
            return s[i];
        }
        return '#';
    }
};
https://practice.geeksforgeeks.org/problems/repeated-character2058/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions
