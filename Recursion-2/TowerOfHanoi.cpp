void towerOfHanoi(int n, char src, char helper, char dest) {
    // Write your code here
    if(n==0){
        return;
    }
   towerOfHanoi(n-1,src,dest,helper);
    cout <<src<<" "<<dest<<endl;
    towerOfHanoi(n-1,helper,src,dest);
}
