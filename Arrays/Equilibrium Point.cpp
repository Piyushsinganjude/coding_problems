class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        int pos = -1 , leftSum = 0, rightSum = 0;
        for(int i =0;i<n;i++)
        rightSum += a[i];
        
        for(int i =0;i<n;i++)
        {
            rightSum -= a[i];
            if(rightSum==leftSum){
                pos =i+1;
                break;
            }
            leftSum += a[i];
        }
        return pos;
    }

};
Link = https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions
