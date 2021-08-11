#include <iostream>
using namespace std;

void print2DArray(int **input, int row, int col) {
    for(int p=0;p<100;p++){
	for(int i=0;i<row-p;i++){
        for(int j=0;j<col;j++){
            cout << input[p][j]<<" ";
        }
        cout<<endl;
    }
    }
   

}


