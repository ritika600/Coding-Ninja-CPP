void arrange(int *arr, int n)
{
    int i=0;
    int j=n-1;
    int k=1;
    while(k<=n){
        if(k%2!=0){
            arr[i]=k;
            i++;
        }
        else if(k%2==0){
            arr[j]=k;
            j--;
        }
        k++;
    }
}
