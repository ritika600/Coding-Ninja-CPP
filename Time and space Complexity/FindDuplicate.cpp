void merge(int a[],int s,int mid,int e)
{
    int l[1000000];
    int r[1000000];
    int k=0,j=0;
    for(int i=s;i<=mid;i++)
    {
        l[k]=a[i];
        k++;
    }
    
       for(int i=mid+1;i<=e;i++)
    {
      r[j++]=a[i];
    }
    int i=0,m=0;
        int add = s;
    while(i<k && m<j)
    {
        if(l[i]<=r[m])
        {
            a[add++] = l[i];
             i++;
        }
        else{
            a[add++]=r[m];
            m++;  
        }
             
    }
    while(i<k)
    {
        a[add++]=l[i];
        i++;
    }
    while(m<j)
    {
        a[add++]=r[m];
        m++;
    }
}
void mergeSort(int a[],int s,int e)
{
    if(s<e)
    {  int mid=(s+e)/2;
        mergeSort(a,s,mid);
     mergeSort(a,mid+1,e);
     merge(a,s,mid,e);
    }
    
}

int findDuplicate(int *arr, int n)
{
    //Write your code here
    mergeSort(arr,0,n-1);
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
            return arr[i];
    }
}
