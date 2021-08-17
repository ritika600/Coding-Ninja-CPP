long sum(long calculated,long current,long n){
    long i,cur=1;
    if(current == n+1){
        return 0;
    }
    for(i=calculated;i<calculated+current;i++)
        cur*=i;
    return cur+sum(i,current+1,n);
}
long Fnth_term(int n)
{
//Write your code here
  sum(1,1,n);
    
}
