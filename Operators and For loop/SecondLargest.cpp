#include<iostream>
using namespace std;
#include <climits>


int main(){
    
    // Write your code here
    int test;
    cin >>test;
    int large= INT_MIN, second = INT_MIN;
    int res;
    while(test--){
        cin >> res;
        if(res>large){
            int temp=large;
            large=res;
            second = temp;
        }
        else if(res>second && res!=large){
            second=res;
        }
    }
    cout << second;
}


