// Change in the given string itself. So no need to return or print anything
#include<bits/stdc++.h>
void replace(char input[],int len,int s){
    if(s==len-1){
        return;
    }
   replace(input,len,s+1);
    if(input[s]=='p' && input[s+1]=='i'){
    //shift
        for(int i=strlen(input);i>=s+2;i--){
            input[i+2]=input[i];
        }
    //value
    input[s]='3';
        input[s+1]='.';
        input[s+2]='1';
        input[s+3]='4';
    }
}
void replacePi(char input[]) {
	// Write your code here
   int len=strlen(input);
    replace(input,len,0);
}


