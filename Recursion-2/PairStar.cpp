// Change in the given string itself. So no need to return or print the changed string.
#include<cstring>
void pairStar(char input[]) {
    // Write your code here
   int len = strlen(input);
    if(len==0){
        return;
    }
    if(input[0]==input[1]){
        for(int i=len;i>0;i--){
        input[i+1]=input[i];
        }
        input[1]='*';
    }
    pairStar(input+1);
}
