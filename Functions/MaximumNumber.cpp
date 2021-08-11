#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    int n;
    cin >>n;
    int res=0;
    int i=1;
    while(n/i>0){
        int temp=(n/(i*10))*i+(n%i);
        i=i*10;
        res=max(res,temp);
    }
    cout <<res;
    
}
