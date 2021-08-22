void printSubsetsOfArray(int input[],int pos,int size,int len,int output[],int k){
if(pos==size)
{ int s=0;
    for(int i=0;i<len;i++)
    {
      
    s=s+output[i];
    }
 if(s==k)
 {
          for(int i=0;i<len;i++)
    {
      
cout << output[i]<<" ";
    } 

        
    cout <<endl;
 }
    return;
    
}

        output[len]=input[pos];
    printSubsetsOfArray(input,pos+1,size,len+1,output,k);
    printSubsetsOfArray(input,pos+1,size,len,output,k);  
}

    
    

void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    
    int output[10000];
    
printSubsetsOfArray(input,0,size,0,output,k);
}
