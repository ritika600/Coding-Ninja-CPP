#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin >> n;
    int i=1;
    int val=1;
    while(i<=n){
        int k=1;
        while(k<=n-i){
            cout << " ";
            k++;
        }
        int j=1;
        val=i;
        while(j<=i){
            cout << val;
            val++;
        j++;
        }
       j=2;
        val=val-2;
        while(j<=i){
            cout << val;
            val--;
        j++;
        }
        i++;
        cout << endl;
    }
  
}


