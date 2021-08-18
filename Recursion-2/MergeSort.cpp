void merge(int input[],int start,int mid,int end)
{
    int s1=mid-start+1;
    int s2=end-mid;
    int a1[s1];
    int a2[s2];
    
    for(int i=0;i<s1;i++)
    {
        a1[i]=input[start+i];
    }
    
    for(int i=0;i<s2;i++)
    {
        a2[i]=input[mid+1+i];
    }
    
    int i=0,j=0,k=start;
    
    while(i<s1 && j<s2)
    {
        if(a1[i]<a2[j])
        {
            input[k]=a1[i];
            k++;i++;
        }
        else{
            input[k]=a2[j];
            k++;j++;
        }
    }
    
    while(i<s1)
    {
        input[k]=a1[i];
         k++;i++;
    }
    
    while(j<s2)
    {
        	input[k]=a2[j];
            k++;j++;
    }
    
    
}
void sort(int input[],int start,int end)
{
    if(start>=end)
        return;
    int mid=(start+end)/2;
    
    sort(input,start,mid);
    sort(input,mid+1,end);
    
    merge(input,start,mid,end);
}
void mergeSort(int input[], int size){
	// Write your code here
    int start=0;
    sort(input,start,size-1);
        
}
