void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
   int count = 0; // Counts the no of zeros in arr
 
    for (int i = 0; i < size; i++) {
        if (input[i] == 0)
            count++;
    }
 
    // Loop fills the arr with 0 until count
    for (int i = 0; i < count; i++)
        input[i] = 0;
 
    // Loop fills remaining arr space with 1
    for (int i = count; i < size; i++)
        input[i] = 1;

   
}
