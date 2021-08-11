#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fact(int n){
    int res=1;
    for(int i=1;i<=n;i++){
        res=res*i;
    }
    return res;
}
int main() {

	// Write your code here
    int n,x;
    
    cin >> n>>x;
   int total=(fact(8)/(fact(n)*fact(8-n)));
    int top=(fact(4)/(fact(x)*fact(4-x)))*(fact(4)/(fact(4-(n-x))*fact(n-x)));
    int ans =(top*100)/total;
    cout <<ans;
}
