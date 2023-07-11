class Solution {
public:
    vector<int> factorial(int N){
        vector<int> res;
        res.push_back(1);
        // Loop from 2 to N
        for(int x = 2; x <= N; x++)
        {
            int car = 0;
            // Multiply each digit in the result vector with x and carry over the remainder
            for(int i = 0; i < res.size(); i++){
                int val = res[i] * x + car;
                res[i] = val % 10;  // Store the single digit
                car = val / 10;    // Carry over the remaining digits
            }
            // Add the remaining carry digits to the result vector
            while(car != 0){
                res.push_back(car % 10);
                car /= 10;
            }
        }
        // Reverse the vector to get the correct order of digits
        reverse(res.begin(), res.end());
        return res;
    }
};
https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1?page=1&difficulty[]=1&category[]=Strings&sortBy=submissions
