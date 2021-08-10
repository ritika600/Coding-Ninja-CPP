#include<cstring>
void reverse(char *a, int i, int j){
    char temp;
    while(i<=j){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++; j--;
    }
}

void reverseEachWord(char a[]) {
    // Write your code here
    int k=0, j, i=0;ag
    while(a[k]){
        if(a[k]==' '){
            j=k-1;
            reverse(a, i, j);
            i=k+1;
        }
        k++;
    }
    int n = strlen(a);
    reverse(a, i, n-1);
}
