#include <string>
using namespace std;

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    if(num ==0 || num==1){
        return 1;
    }
    string input;
    int n= num%10;
    switch(n){
        case 2:
            input="abc";
            break;
             break;
     case 3:
           input = "def";
           break;
     case 4:
           input = "ghi";
           break;
     case 5:
           input = "jkl";
           break;
     case 6:
           input = "mno";
           break;
   case 7:
           input = "pqrs";
           break;
 case 8:
           input = "tuv";
           break;
 case 9:
           input = "wxyz";
           break;

   }
    num=num/10;
    int small = keypad(num,output);
    int size = small*input.size();
   
    int k=0;
     string temp[size];
    for(int i =0;i<input.size();i++){
        for(int j=0;j<small;j++){
            temp[k++]=output[j]+input[i];
        }
        
    }
  for(int i=0;i<size;i++)
    {
       output[i]=temp[i]; 
    }
    return size;
}
