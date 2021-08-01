#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
    int n;
    cin >>n;
    int binary;
    int c=0;
    while(n!=0){
        int d=n%10;
        binary += pow(2,c)*d;
        c++;
        n=n/10;
        
    }
    cout << binary;
	
}
