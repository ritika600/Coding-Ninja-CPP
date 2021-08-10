char highestOccurringChar(char input[]) {
    // Write your code here
    int arr[256]={0};
    for(int i=0;input[i]!='\0';i++)
    {
        int z = input[i];
        arr[z]++;

    }
    int max=0;
    int index=0;
    for(int i=97;i<=122;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
           
        }
    }
    char letter =index;

    return letter;
}
