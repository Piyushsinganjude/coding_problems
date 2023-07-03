// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        unordered_map<char,int>mp;
        for(int i =0;i<string2.size();i++)
        mp[string2[i]]++;
        string ans = "";
        for(int i=0;i<string1.size();i++){
            if(mp.find(string1[i])==mp.end())
            ans += string1[i];
            else
            mp[string1[i]]--;
        }
        return ans;
    }
};
https://practice.geeksforgeeks.org/problems/remove-character3815/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions
