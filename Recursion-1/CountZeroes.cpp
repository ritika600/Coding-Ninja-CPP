
int countZeros(int n) {
    // Write your code here
     if(n==0){
        return 1;
    }
   int rem=n%10;
    int num=n/10;
    if(num==0){
        return 0;
    }
    int count=0;
   
    if(rem==0){
        count++;
    }
   
    return count + countZeros(num);
}


