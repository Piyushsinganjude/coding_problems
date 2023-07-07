class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       unordered_map<int,int>mp;
       for(int i=0;i<S.length();i++){
           mp[S[i]]++;
       }
       for(int i =0;i<S.length();i++)
       {
           if(mp[S[i]]==1){
               return S[i];
           }
       }
       return '$';
       
    }

};
https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1?page=1&difficulty[]=0&category[]=Strings&sortBy=submissions
