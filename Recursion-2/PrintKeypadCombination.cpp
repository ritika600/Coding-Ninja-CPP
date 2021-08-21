#include <iostream>
#include <string>
using namespace std;
void printKeypad(int num,string output){
    if(num==0)
    {
        cout << output << endl;
        return;
    }
    int n = num%10;
    
    string input;
    switch(n)
   {
       case 2:
           input = "abc";
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
    
    
  
    for(int i=0;i<input.size();i++)
    {   
        printKeypad(num/10 , input[i]+output);
    }
    
    
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string output="";
    printKeypad(num,output);

}
