void printSubstrings(char input[]) {
    // Write your code here
    int len=strlen(input);
    int p=0;
   while(p!=len){
    for(int i=0;i<len;i++){
        for(int j=p;j<=i;j++){
            cout << input[j];
        }
        cout << endl;
       
    }
       p++;
    }
}
