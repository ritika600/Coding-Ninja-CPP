int pairSum(int *input, int size, int x)
{
	//Write your code here
    int c=0;
    for(int i=0;i<size;i++){
        
        for(int j=i+1;j<size;j++){
            if(input[i]+input[j]==x){
                c++;
            }
            
        }
    }
    if(c>=0){
    return c;
    }else 
        return 0;
}
