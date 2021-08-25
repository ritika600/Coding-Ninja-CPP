void reverse(int a[],int start,int end)
{
    while(start<end)
    {
        int temp = a[end];
        a[end]=a[start];
        a[start] = temp;
        start++;
        end--;
    }
}
void rotate(int *a, int d, int n)
{
    //Write your code here
    
//123456
    
        //345612
    reverse(a,0,n-1);
    reverse(a,0,n-d-1);
    reverse(a,n-d,n-1);
 
}
