#include<iostream>
using namespace std;

int main(){

  // Write your code here  
   int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=n-i;
        while(j>=1){
            cout << " ";
            j--;
        }
        int k=i;
        while(k>=1){
            cout << k;
            k--;
        }
         int p=2;
        while(p<=i){
            cout << p;
            p++;
        }
        i++;
        cout << endl;
    }
}

