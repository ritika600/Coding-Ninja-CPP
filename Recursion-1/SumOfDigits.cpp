int sumOfDigits(int n) {
    // Write your code here
    if(n==0){
        return 0;
    }
   int rem=n%10;
    int num=n/10;
    
    return rem+sumOfDigits(num);
}


