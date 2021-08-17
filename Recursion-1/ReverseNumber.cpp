int reverse(int input,int num=0)
{
//Write your code here
    
    if(input==0)
        return num;
   
    int rem=input%10;
    num=num*10+rem;
    return reverse(input/10,num);
}
