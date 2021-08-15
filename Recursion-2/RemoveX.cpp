// Change in the given string itself. So no need to return or print anything
#include<cstring>
void removeX(char input[]) {
    // Write your code here
  int n=strlen(input);
    if(n==0){
        return;
    }
    removeX(input+1);
    if(input[0]=='x'){
        for(int i=0;i<n-1;i++){
            input[i]=input[i+1];
        }
        input[n-1]='\0';
    }
}
