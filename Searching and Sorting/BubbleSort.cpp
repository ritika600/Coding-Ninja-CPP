void bubbleSort(int *input, int size)
{
    //Write your code here
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(input[i]>input[j]){
                int temp=input[i];
                input[i]=input[j];
                input[j]=temp;
            }
        }
    }
}
