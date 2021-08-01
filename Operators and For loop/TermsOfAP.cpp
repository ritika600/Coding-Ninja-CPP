
#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int c=0;
    for(int i=1;i<=100000;i++)
    {
        
        int res=(3*i)+2;
        if(res%4!=0)
        {
            c++; 
       cout<<res<<" ";
       if(c==n)
        break;
        }
    }

    return 0;
}
