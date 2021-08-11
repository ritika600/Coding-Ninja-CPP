void Leaders(int* a,int n)

{
	int j=0, max, maxi;
    while(j<n){
        max=0;
        for(; j<n; j++){
            if(a[j]>max){
                max = a[j];
                maxi = j;
            }
        }
        cout<<max<<" ";
        j=maxi+1;
    }
}
