class Solution{
public:
    //Complete this function
    void rec(int i , vector<string> &res , string S)
    {
        if(i>=S.size())
        {
            res.push_back(S);
            return;
        }
        for(int j=i;j<S.size();j++)
        {
            swap(S[i] , S[j]);
            
            rec(i+1,res,S);
            
            swap(S[i],S[j]);
        }
    }
    
    vector<string> permutation(string S)
    {
        vector<string> res;
        rec(0,res,S);
        
        sort(res.begin(),res.end());
        return res;
    }
};
Link = (https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string-1587115620/1?page=1&difficulty[]=0&category[]=Recursion&sortBy=submissions)
