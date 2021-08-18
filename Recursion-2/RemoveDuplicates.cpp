#include<cstring>
void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
    int len = strlen(input);
 if(len==0){
     return;
 }
    if(input[0]==input[1]){
        int i=0;
        for(;i<1000;i++){
            input[i]=input[i+1];
        }
        input[i+1]='\0';
        removeConsecutiveDuplicates(input);
    }
  removeConsecutiveDuplicates(input+1);

}
