#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin >> n;
    int rev=0;
    int c=0;
    while(n!=0){
        int d=n%10;
        rev = rev*10+d;
        n=n/10;
    }
    cout << rev; 
}
