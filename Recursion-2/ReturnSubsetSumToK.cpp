/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 3, 4, 2} and K = 5, then output array should contain
	{{2, 1, 4},	// Length of this subset is 2
	{2, 3, 2}}	// Length of this subset is 2

DonÃ¢ÂÂt print the subsets, just save them in output.
***/

int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
if(n==0){
    if(k==0){
        output[0][0]=0;
        return 1;
    }
    return 0;
}int s1[5000][50];
    int s2[5000][50];
    int x=subsetSumToK(input+1,n-1,s1,k-input[0]);
    int y =subsetSumToK(input+1,n-1,s2,k);
    for(int i=0;i<x;i++)
    {
    
     int col = s1[i][0]+1;
        output[i][0]=col;
        output[i][1]=input[0];
        for(int j=1;j<=col;j++)
        {
            output[i][j+1]=s1[i][j];
        }
        
    }
    int m=0;
    for(int i=x;i<(x+y);i++)
    {
        int col=s2[m][0];
        output[i][0]=col;
       for(int j=1;j<=col;j++)
       {
           output[i][j]=s2[m][j];
       }
        m++;
    }
    return x+y;
    
}
