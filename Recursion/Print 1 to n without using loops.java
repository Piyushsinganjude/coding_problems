class Solution{
    static void printTillN(int N){
        // base case
        if(N==1) {
            System.out.print(N + " ");
            return;
        }
        // recursive call
        printTillN(N-1);
        System.out.print(N+" ");
    }
}
https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1?page=1&difficulty[]=-2&category[]=Recursion&sortBy=submissions
