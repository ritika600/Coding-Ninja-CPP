void minLengthWord(char* a,char* b)
{
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    int length = i;
    int index = 0;
    int min = 100;
    int count=0;
    for( i = 0 ; i< length ; i++)
    {
        if(a[i] != ' ')
            {
                count++;
            }
        else
            {
                if(count < min)
                    {
                        min = count;
                        index = i-min;
                    }
                count = 0;
            }
    }
    if(count< min)
        {
            min = count;
            index = length-min;
        }
    int j=0;
    for(i=index;i< index+min;i++)
    {
        b[j] = a[i];
        j++;
    }
    b[j] = '\0';
}
