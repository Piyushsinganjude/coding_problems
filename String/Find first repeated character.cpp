string firstRepChar(string s)
{
    string ans = "";
    unordered_map<char,int>mp;
    for(int i =0;i<s.length();i++)
    {
        mp[s[i]]++;
        if(mp[s[i]]==2){
            ans = s[i];
            return ans;
        }
    }
    return "-1";
}
https://practice.geeksforgeeks.org/problems/find-first-repeated-character4108/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions
