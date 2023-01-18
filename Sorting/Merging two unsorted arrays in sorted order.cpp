class Solution{
	public:
	void sortedMerge(int a[], int b[], int res[],int n, int m)
	{
	   /// result me a vlues daalne hain
	   
	   for(int i=0; i<n; i++)
	   {
	       res[i] = a[i];
	   }
	   
	   // b ke elemnt copy
	   for(int i =0;i<m;i++)
	   {
	       res[i+n]=b[i];
	       
	   }
	   int size = n+m;
	   sort(res,res+size);
	}
};
LINK = (https://practice.geeksforgeeks.org/problems/merging-two-unsorted-arrays-in-sorted-order1020/1?page=2&difficulty[]=0&category[]=Sorting&sortBy=submissions)
