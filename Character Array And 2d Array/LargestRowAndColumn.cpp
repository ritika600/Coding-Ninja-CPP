void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
    if(nRows==0 || mCols==0){
        cout << "row" <<" "<< 0<<" "<<-2147483648;
    }
    int sumr;
    int max=0,index;
    for(int i=0;i<nRows;i++){
        sumr=0;
        for(int j=0;j<mCols;j++){
            sumr+=input[i][j];
        }
        
        if(sumr>max){
            max=sumr;
            index=i;
        }
    }
      int sumc;
    int max2=0,index2;
    for(int i=0;i<mCols;i++){
        sumc=0;
        for(int j=0;j<nRows;j++){
            sumc+=input[j][i];
        }
        
        if(sumc>max2){
            max2=sumc;
            index2=i;
        }
    }
    if(max>=max2 && nRows!=0 ){
        cout << "row" <<" "<< index<<" "<<max;    }
    else if(max2>max) {
         cout << "column" <<" "<< index2<<" "<<max2;
    }
    
}
