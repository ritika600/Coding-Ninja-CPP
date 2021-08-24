void merge(int a[],int s,int mid,int e)
{
    int l[10000];
    int r[10000];
    int k=0,j=0;
    for(int i=s;i<=mid;i++)
    {
        l[k]=a[i];
        k++;
    }
    
       for(int i=mid+1;i<=e;i++)
    {
      r[j++]=a[i];
    }
    int i=0,m=0;
        int add = s;
    while(i<k && m<j)
    {
        if(l[i]<=r[m])
        {
            a[add++] = l[i];
             i++;
        }
        else{
            a[add++]=r[m];
            m++;  
        }
             
    }
    while(i<k)
    {
        a[add++]=l[i];
        i++;
    }
    while(m<j)
    {
        a[add++]=r[m];
        m++;
    }
}
void mergeSort(int a[],int s,int e)
{
    if(s<e)
    {  int mid=(s+e)/2;
        mergeSort(a,s,mid);
     mergeSort(a,mid+1,e);
     merge(a,s,mid,e);
    }
    
}

int pairSum(int *arr, int start, int end, int target) {


   int finalCount = 0;
	while (start < end) {
		
		if (arr[start] + arr[end] > target) {
			end--;
		}
		
		else if (arr[start] + arr[end] < target) {
			start++;
		}
			else {
			int startIndex = start;
			int endIndex = end;
		 	if (arr[start] == arr[end]) {
				int betweenIndexes = (end - start) + 1;
				finalCount += (betweenIndexes * (betweenIndexes - 1)) / 2;
				return finalCount;
			}
		
			int newStart = start + 1;
			int newEnd = end - 1;

			while (newStart <= newEnd && arr[newStart] == arr[start])
				newStart++;
			while (newStart <= newEnd && arr[newEnd] == arr[end])
				newEnd--;

			int eleFromStart = newStart - start;
			int eleFromEnd = end - newEnd;

			finalCount += (eleFromStart * eleFromEnd);

			start = newStart;
			end = newEnd;
		}
	}

	return finalCount;
}


int tripletSum(int *A, int n, int sum)
{if(n==0)
    return 0;
	//Write your code here
    int ans=0;
    int l,r;
 mergeSort(A,0,n-1);
for (int i = 0; i < n ; i++) {
 
        // To find the other two elements, start two index
        // variables from two corners of the array and move
ans+=pairSum(A,i+1,n-1,sum-A[i]);
    }
    
    return ans;
 
}
