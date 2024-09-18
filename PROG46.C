// Write a C Program for frequency count for following number.
// E.g. 12,12,4,6,6,6,7,7
// Output is: The frequency of 12 is 2
//  4 is 1
// 5 is 1
// 6 is 3
// 7 is 2

#include <stdio.h>

int main()
{
    int arr[] = {12, 12, 4, 6, 6, 6, 7, 7};  
    int freq[100] = {0};                     
    int size = sizeof(arr) / sizeof(arr[0]); 

    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++; 
    }

    printf("Frequency count:\n");
    for (int i = 0; i < 100; i++)
    {
        if (freq[i] != 0)
        {
            printf("The frequency of %d is: %d\n", i, freq[i]);
        }
    }

    return 0;
}
