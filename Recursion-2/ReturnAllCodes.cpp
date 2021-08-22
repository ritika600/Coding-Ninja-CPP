#include <string.h>
using namespace std;

int getCodes(string input, string output[10000]) {
    /*
    You are given the input text and output string array. Find all possible codes and store in the output string array. Donât print the codes.
    Also, return the number of codes return to the output string. You do not need to print anything.
    */
    
    
    if(input.size()==0)
    {
        output[0]="";
        return 1;
    }
    string s1[500];
    string s2[500];
    int a = getCodes(input.substr(1), s1);
    int z = input[0]-48;
    char c = 'a'+z-1;
    int k=0;
    for(int i=0;i<a;i++)
    {
        output[k++]=c+s1[i];
    }
    int b=0;
    if(input.size()>=2)
    {
        int m = input[0]-48;
        int n = input[1]-48;
        int z = m*10+n;
        char c = 'a' +z-1;
        if(z>=10 && z<=26)
        {
           b= getCodes(input.substr(2), s2);
            
            for(int i=0;i<b;i++)
            {
                output[k++]=c+s2[i];
            }
        }
    }
    return a+b;
    
}
