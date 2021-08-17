#include <bits/stdc++.h>
using namespace std;
int minCount(int n){

  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */

if(sqrt(n)-floor(sqrt(n))==0)
    return 1;
    if(n<=3)
        return n;
    int res=n;
    for(int x=1;x<=n;x++){
        int temp=x*x;
        if(temp>n)
            break;
        else
            res=min(res,1+minCount(n-temp));
    }
    return res;
}
