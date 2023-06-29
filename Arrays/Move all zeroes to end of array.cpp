//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int count = 0;
	    for(int i =0;i<n;i++){
	        if(arr[i]!=0){
	            int temp = arr[i];
	            arr[i] = arr[count];
	            arr[count] = temp;
	            count++;
	        }
	        
	    }
	}
};
LINK = https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?page=2&difficulty[]=0&category[]=Arrays&sortBy=submissions
