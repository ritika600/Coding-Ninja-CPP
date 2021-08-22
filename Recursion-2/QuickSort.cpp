int part(int a[],int s,int e)
{
    int num = a[s];
    
    int count =0;
    for(int i=s+1;i<=e;i++)
    {
        if(a[i]<=num)
            count++;
    }
    a[s]=a[s+count];
    a[s+count]=num;
    
    int i=s,j=e;
    while(j!=s+count){
        if(a[i]<=num)
            i++;
        else if(a[j]>num)
            j--;
        else 
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
            
        }
    }
    return count+s;
	
}

void qs(int a[],int s,int e){
    if(s>=e)
        return;
    
    int c = part(a,s,e);
    qs(a,s,c-1);
    qs(a,c+1,e);
}

void quickSort(int a[], int n) {
  qs(a,0,n-1);

}
