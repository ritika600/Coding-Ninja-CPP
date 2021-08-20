void printSubsetsOfArray(int input[],int size,int output[],int m){
    if(size==0){
         for(int i = 0; i < m; i++){
            cout << output[i] << " " ;
        }
        cout << endl;
        return ;
    }
    printSubsetsOfArray(input+1,size-1,output,m);
    
     int newa[m + 1];
    int i;
    for( i=0;i<m;i++){
        newa[i]=output[i];
        
       
    }newa[i]=input[0];
    printSubsetsOfArray(input+1,size-1,newa,m+1);
}
void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    
    int output[0];
    printSubsetsOfArray(input,size,output,0);
}
