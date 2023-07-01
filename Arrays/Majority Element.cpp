//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size)
    {
        
        int el = 0;
        int count = 0;
        for(int i=0;i<size;i++){
            if(count == 0){
                el = arr[i];
            }
            if(el == arr [i]) count ++;
            else count--;
        }
        count =0;
        for(int i=0;i<size;i++){
            if(el == arr[i]){
                count ++;
            }
        }
        if(count > size/2){
            return el;
        }return -1;
}
};
LINK = https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&difficulty[]=1&sortBy=submissions
