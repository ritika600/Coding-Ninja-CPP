#include <iostream>
#include <string.h>
using namespace std;
void help(string input,string ans)
{
     if(input.size()==0){
     cout<<ans<<endl;
         return;
    }
    int z = input[0]-48;
    char c ='a'+z-1;

    help(input.substr(1),ans+c);
    
    if(input.size()>=2)
    {
    int k = input[0]-48;
    int j = input[1]-48;
    int x = k*10+j;
        
    if(x>=10 && x<=26)
    {   
           
           char t ='a'+x-1;

           help(input.substr(2),ans+t);
    }

    
    }
    return;
 
    
}

void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
   
   string ans="";
    string ans2="";
   help(input,ans);
  
}
