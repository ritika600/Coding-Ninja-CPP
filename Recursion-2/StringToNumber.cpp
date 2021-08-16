#include<bits/stdc++.h>
int stringToNumber(char input[]) {
    // Write your code here
int len=strlen(input);
    if(len==0){
        int b=input[len];
        return b;
    }
    int b;
    for(int i=len;i>=0;i--){
    b=input[i]-48;
    }
    int a=stringToNumber(input+1);
    int ans=b*pow(10,len-1)+a;
     return ans;
}


