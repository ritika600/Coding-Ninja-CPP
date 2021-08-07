int findSecondLargest(int *a, int n)
{
    int c=0;
  int z=-2147483648;
    if(n<=1)
        return z;
    int large = a[0];
    int seclarge=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>large)
        {
            seclarge = large;
            large=a[i];

        }
        else if(a[i]<large && a[i]>seclarge)
        {
            seclarge = a[i];
  
            
        }
        else
            c++;
    }
   if(c==n-1)
       return z;
    return seclarge;
}
