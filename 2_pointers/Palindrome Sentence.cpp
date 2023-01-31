 int i=0,j=s.size()-1;

    while(i<=j){

        if(!(s[i]>= 'a' && s[i]<='z'))

             i++;

         else if(!(s[j]>= 'a' && s[j]<='z'))

             j--;

        else if(s[i]!=s[j])

             return false;

        else{

            i++;

            j--;

        }

    }

    return true;
link = (https://practice.geeksforgeeks.org/problems/string-palindromic-ignoring-spaces4723/1?page=1&difficulty[]=0&category[]=two-pointer-algorithm&sortBy=submissions)
