void printTable(int start, int end, int step) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    int res;
    for(int i=start;i<=end;i+=step){
         res=(i-32)*5.0/9;
        cout << i << "\t" <<res <<endl;
        
    }
    
}


