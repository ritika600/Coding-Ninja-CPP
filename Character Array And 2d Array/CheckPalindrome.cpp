bool checkPalindrome(char str[]) {
    // Write your code here
    int c=0,len=strlen(str);
    for(int i=0;i<=len/2;i++){
        if(str[i]==str[len-i-1]){
            c++;
            
        }
    }
    if(c>=(len/2)){
        return true;
    }
    else return false;
}
