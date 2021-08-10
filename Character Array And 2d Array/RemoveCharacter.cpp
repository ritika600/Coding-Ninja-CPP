void removeAllOccurrencesOfChar(char S[], char c) {
    // Write your code here
   int len=strlen(S);
    int k=0;
   
    for(int i=0;i<len;i++){
        if(c!=S[i]){
            S[k]=S[i];
            k++;
        }
        
    }
    S[k]='\0';
}
