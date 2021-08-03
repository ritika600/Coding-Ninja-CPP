#include<iostream>
using namespace std;


int main(){

  // Write your code here
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout << j;
            j++;
        }
        int k=2;
        while(k<=i){
            cout << "*";
            k++;
        }int x=2;
        while(x<=i){
            cout << "*";
            x++;
        }
         int l=n-i+1;
        while(l>=1){
            cout << l;
            l--;
        }
        i++;
        cout <<endl;
    }
   

}


