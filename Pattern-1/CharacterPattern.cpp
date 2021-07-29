#include<iostream>
using namespace std;


int main(){
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        char start = 'A' + i-1; 
        while(j<=i){
            char ch= start +j-1;
            cout << ch;
            j++;
        }
        i++;
        cout << endl;
    }
    
}

