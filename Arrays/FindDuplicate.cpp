int duplicateNumber(int *arr, int size)
{
    //Write your code here
    int res=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
               return arr[i];
            }
        }
    }
    
    
}
