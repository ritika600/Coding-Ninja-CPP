#include<iostream>
using namespace std;


int main() {
	// Write your code here
	int i=0,j;
    int dNum;
    int bArr[20];
    cin>>dNum;
    if(dNum==0)
    {
        cout<<0;
    }
    while(dNum>0)
    {
        bArr[i]=dNum%2;
        dNum=dNum/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        cout<<bArr[j];
    }
}
