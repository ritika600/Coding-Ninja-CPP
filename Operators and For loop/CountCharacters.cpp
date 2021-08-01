#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
     char c;
   
      int alpha=0,digits=0,white=0;
    while(c!='$'){
        c = cin.get();
        if(c>=97 && c<=122 ){
            alpha++;
        }
        else if(c>=48 && c<=57){
            digits++;
        }
        else if(c==32 || c==10|| c==9) {
            white++;
        }
       
      
        
    }
    cout << alpha <<" " <<digits << " "<<white;
}


