class Solution{
    static void gfSeries(int N){
        long[] arr = new long[N];
        arr[0] = 0;
        arr[1] = 1;
        for(int i = 2;i<N;i++){
            arr[i] = (arr[i-2]*arr[i-2]) - (arr[i-1]);  
        }
        
        for(int i = 0;i<N;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}
https://practice.geeksforgeeks.org/problems/gf-series3535/1?page=1&difficulty[]=-1&category[]=Recursion&sortBy=submissions
