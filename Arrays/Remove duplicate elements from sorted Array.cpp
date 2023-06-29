//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        int i =0;
        int j =0;
        while(j<n)
        {
            if(a[i]!=a[j])
            {
                i++;
                a[i]=a[j];
            }
            j++;
        }
        return i+1;
    }
};
Link = https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions
