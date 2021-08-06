int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int start=0,last=n-1;
    for(int i=0;i<n;i++){
        int mid=(start+last)/2;
        if(val==input[mid]){
            return mid;
        }else if(val>input[mid]){
            start=mid+1;
        }else if(val<input[mid]){
            last=mid-1;
        }
    }
    return -1;
}
