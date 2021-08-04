int linearSearch(int *arr, int n, int x)
{
    //Write your code here
    
   int c=0;int index;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            c++;
            index=i;
        }
       
    }
        if(c>=1){
	        return index;
	    }
	    else return -1;
   
    }
