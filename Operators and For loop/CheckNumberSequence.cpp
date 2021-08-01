#include<iostream>
using namespace std;

int main() {
	// Write your code here
    
    int n;
    cin >> n;
    
    int a, b;
    
    cin>>a>>b;
    
    bool is_dec = false;
    
    if(a>b){
        is_dec=true; //decreasing
    }else if(a<b){
        is_dec=false; // increasing
    }else{
        cout<<"false";
        return 0;
    }
    
    int i=1;
    
    while(i<=(n-2)){
        a = b;
        
        cin>>b;
        
        if(a > b){
            if(is_dec==true){
                is_dec=true;
            }else{
                cout<<"false";
        		return 0;
            }
        }else if(a < b){
            is_dec = false;
        }else{
            cout<<"false";
        	return 0;
        }
        
        i++;
    }
    
    
    cout<<"true";
    return 0;
}
