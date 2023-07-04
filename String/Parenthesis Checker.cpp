class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;
    for(char i : x) {
        if(i == '(' or i == '{' or i == '[') {
            s.push(i);
        } else {
            if ((i == ')') && (s.empty() || s.top() != '(')) return false;
            if ((i == '}') && (s.empty() || s.top() != '{')) return false;
            if ((i == ']') && (s.empty() || s.top() != '[')) return false;
            s.pop();
        }
    }
    return s.empty();
    }

};
https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1?page=1&difficulty[]=0&category[]=Strings&sortBy=submissions
