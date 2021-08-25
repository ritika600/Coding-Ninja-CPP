int arrayRotateCheck(int *a, int size)
{
    //Write your code here
    int i=0,j,ans=0;
  
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[i])
            {
                ans = j;
                return j;
            }
        }
   return 0;
    
}
