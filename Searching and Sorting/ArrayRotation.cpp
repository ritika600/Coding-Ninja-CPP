int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    int min=input[0],index;
    for(int i=0;i<size;i++){
        if(min>input[i]){
            min=input[i];
            index=i;
        }
    }
    if(size!=0){
    return index;
    }else return 0;
}
