void swapAlternate(int *arr, int size)
{
    //Write your code here
    int i=0;
   
   while(i<size-1){
       int temp=arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
      
       i+=2;
   }
}
