#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int p,q;
    cin >>p >>q;
    int m[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin >> m[i][j];
        }
    }
    int sum;
    for(int i=0;i<q;i++){
       sum=0;
        for(int j=0;j<p;j++){
            sum=sum+m[j][i];
        }
        cout<< sum<<" ";
    }
    
     
  
}


