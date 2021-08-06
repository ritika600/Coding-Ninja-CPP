void rotate(int *arr, int d, int n)
{
     int start[d];
    for(int i=0;i<d;i++){
             start[i]=arr[i];
    }

     for(int j=0;j<n;j++){
         arr[j]=arr[j+d];
     }
    int m=0;
      for(int j=n-d;j<n;j++){
          
         arr[j]=start[m];
          m++;
     }

}
