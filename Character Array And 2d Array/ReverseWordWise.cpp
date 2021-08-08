#include<cstring>

void reverse(char input[],int i,int j) {
   
    while(i<j){
       int temp=input[i];
       input[i]=input[j];
       input[j]=temp;
   i++;j--;
    }
}

void reverseStringWordWise(char input[]) {
    int len=strlen(input);
    int i=0,j=len-1;
     reverse(input,i,j);
   int k=0;
    while(input[k]){
        if(input[k]==' '){
            j=k-1;
            reverse(input, i, j);
            i=k+1;
        }
        k++;
    }
    reverse(input, i, len-1);
}
