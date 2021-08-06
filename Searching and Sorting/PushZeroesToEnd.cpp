void pushZeroesEnd(int *input, int size)
{
    //Write your code here
    int c=0;
    for(int i=0;i<size;i++){
        
        if(input[i]!=0){
           input[c]=input[i];
            c++;
            
        }
    }
    for(int i=c;i<size;i++){
        input[i]=0;
    }
}
