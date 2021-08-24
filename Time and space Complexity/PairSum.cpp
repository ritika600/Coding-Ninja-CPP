void merge(int a[],int s,int mid,int e)
{
    int l[10000];
    int r[10000];
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

int pairSum(int *a, int n, int num)
{
	//Write your code here
    int ans=0;
    mergeSort(a,0,n-1);
    int left =0;
    int right =n-1;
  bool  isfalse = true; 
    
    
  while(left<right)
     {
      
      if(a[left]!=a[right])
      {
          isfalse = false;
          break;
      }
      
      left++;
      right--;
          
  }
    if(isfalse   && a[left]+a[right]==num)
    return 2*(n);
    
    
    left =0;right =n-1;
    while(left<right)
    {
       if((a[left]+a[right])==num)
       {
           int cl = left,cr=right;
           int clc =0,crc=0;
           while(a[cl]==a[left])
           {
               
               clc++;//count 
               cl++;//counting duplicates
           }
           while(a[cr]==a[right])
           {
               crc++;
               cr--;
           }
           ans=ans+(clc*crc);
           left=cl;
           right=cr;
       }
   else if(a[left]+a[right]>num)
       {
         right--;
       }
        else
            left++;
    }
    return ans;
}
