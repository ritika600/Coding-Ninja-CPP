void wavePrint(int **input, int nRows, int mCols)
{
    
    for(int p=0;p<mCols;p++){
        if(p%2==0){
    for(int i=0;i<nRows;i++){
       
            cout << input[i][p]<<" ";
        
    }
        }
        else{
    for(int i=nRows-1;i>=0;i--){
       
            cout << input[i][p]<<" ";
        
    }
    }
     
    } 
}
