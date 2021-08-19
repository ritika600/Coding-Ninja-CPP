long long binarySearch(int input[],int s,int e,int x)
{
 if(s>e){
     return -1;
 }
      int  mid=(s+e)/2;
        if(input[mid]==x)
            return mid;
    else
       if(input[mid]>x)
         return binarySearch(input,s,mid-1,x);
       else
         if(input[mid]<x)

          return binarySearch(input,mid+1,e,x);
    
}
long long binarySearch(int input[], int size, int element) {
    // Write your code here
if(size==1 && input[0]==element)
    return 0;

if(size==0)
    return -1;
    
    
    
    return binarySearch(input,0,size-1,element);
}
