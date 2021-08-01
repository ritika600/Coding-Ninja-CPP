#include <iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    int n;
    cin >> n;
    int c;
    for(int i=2;i<=n;i++){
        c=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
              c=0;
                break;
            }
            
        }
         if (c==1)
        cout << i << endl;
    }

}


