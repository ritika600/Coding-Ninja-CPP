#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,p;
    cin >>n >>p;
    if(p==1){
        int sum=0;
        for(int i=0;i<=n;i++){
            sum+=i;
        }
        cout <<sum ;
    }else if(p==2){
         int product=1;
        for(int i=1;i<=n;i++){
            product*=i;
        }
        cout <<product ;
    }else {
        cout << -1;
    }
	
}
