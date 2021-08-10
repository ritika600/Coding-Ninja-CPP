void removeConsecutiveDuplicates(char S[]) {
  int len=strlen(S);
    int k=0;
    char prev='\0';
    for(int i=0;i<len;i++){
        if(prev!=S[i]){
            S[k]=S[i];
            k++;
        }
        prev=S[i];
    }
    S[k]='\0';
}
