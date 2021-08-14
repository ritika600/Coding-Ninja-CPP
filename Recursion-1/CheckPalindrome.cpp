#include <cstring>
bool helper(char input[],int n){
     
  if(n<=0){
      return true;
  }
    if(input[0]==input[n-1]){
       return helper(input+1,n-2);
    }
    else return false;
   
    
    
}
bool checkPalindrome(char input[]) {
    // Write your code here
   int n=strlen(input);
   return helper(input,n);
}


