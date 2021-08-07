void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    //Write your code here
   //Write your code here
    int i=size1-1,j=size2-1,k=(size1>size2)?size1:size2,sum=0,carry=0;
    while(i>=0 && j>=0)
    {
        sum=input1[i]+input2[j]+carry;
        output[k]=sum%10;
        carry=sum/10;
        j--,i--,k--;
    }
    while(i>=0)
    {
        sum=input1[i]+carry;
        output[k]=sum%10;
        carry=sum/10;
        i--,k--;
    }
    while(j>=0)
    {
        sum=input2[j]+carry;
        output[k]=sum%10;
        carry=sum/10;
        j--,k--;
    }
    output[k]=carry;
}
