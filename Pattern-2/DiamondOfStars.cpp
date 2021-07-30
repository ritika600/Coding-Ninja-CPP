#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin >> n;
    int i=1;
    int m=(n+1)/2;
    while(i<=m){
        int k=1;
        while(k<=m-i){
            cout << " ";
            k++;
        }
        int j=1;
       
        while(j<=2*i-1){
            cout << "*";
            
        j++;
        }
//        j=2;
        
//         while(j<=i){
//             cout << "*";
            
//         j++;
//         }
        
        i++;
        cout << endl;
    }
    
    int p=1;
       while(p<=n-m){
        int k=1;
        while(k<=p){
            cout << " ";
            k++;
        }
        int j=1;
       
        while(j<=2*(n-m-p+1)-1){
            cout << "*";
            
        j++;
        }
//        j=2;
        
//         while(j<=p){
//             cout << "*";
            
//         j++;
//         }
        
        p++;
        cout << endl;
    }
  
}


