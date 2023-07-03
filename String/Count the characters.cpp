class Solution
{
  public:
        int getCount (string s, int N)
        {
           map<char,int> mp;
            int count=0;
            mp[s[0]]++;
            for(int i=1;i<s.length();i++)
            {
                if(s[i]!=s[i-1])
                {
                    mp[s[i]]++;
                }
                
            }
            
            for(auto i:mp)
            {
                if(i.second==N)
                {
                    count++;
                }
            }
            return count;
        }
};
https://practice.geeksforgeeks.org/problems/count-the-characters1821/1?page=2&difficulty[]=-1&category[]=Strings&sortBy=submissions
