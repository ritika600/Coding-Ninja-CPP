void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int i=0,j=0,rowStart=0,rowEnd=nRows-1;
    int colStart=0,colEnd=nCols-1;
    while(rowStart<=rowEnd && colStart<=colEnd){
        for(int i=colStart;i<=colEnd;i++){
            cout<< input[rowStart][i]<<" ";
        }
        rowStart++;
        for(int i=rowStart;i<=rowEnd;i++){
            cout << input[i][colEnd]<< " ";
        }
        colEnd--;
        for(int i=colEnd;i>=colStart;i--){
            cout << input[rowEnd][i]<< " ";
        }
        rowEnd--;
        for(int i=rowEnd;i>=rowStart;i--){
            cout << input[i][colStart]<<" ";
        }
        colStart++;
    }
}
