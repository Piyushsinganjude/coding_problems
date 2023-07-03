int strstr(string s, string x)
{
     int lenS=s.length();
     int lenX=x.length();
     int flag;
     for(int i =0;i<lenS;i++)
     {
         if(s[i]== x[0]){
             flag=0;
             for(int j =0;j<lenX;j++){
                 if(s[i+j] != x[j]){
                     flag=1;
                     break;
                 }
             }
             if(flag == 0){
                 return i;
             }
         }
     }
     return -1;
}
Link = https://practice.geeksforgeeks.org/problems/implement-strstr/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions
