int numberh(int* input,int n,int sum,int start,int current)
{
	//Write your code here
   if(start>=n){
       if(current==sum){
           return 1;
       }else{
           return 0;
       }
   }
   int a=numberh(input,n,sum,start+1,current);
    int b = numberh(input,n,sum,start+1,current+input[start]);
    int c=numberh(input,n,sum,start+1,current-input[start]);
    int ans = a+b+c;
    
        return ans;
}
int number(int* input,int n,int sum){
    int ans = numberh(input,n,sum,0,0);
    if(sum==0){
        return ans-1;
    }
    else return ans;
}
