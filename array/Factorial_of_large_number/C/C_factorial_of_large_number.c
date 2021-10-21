#include <stdio.h>
int main()
{
    int N, n, i, carry, size, mul;
    int res[4000];  // Let the array have capacity to store up to 4000 digits
                    
    printf("\nEnter number to calculate factorial: ");
    scanf("%d", &N);
 
    res[0] = 1;     
    carry = 0;      
    size = 1;      //No. of digit in the array
 
    for(n = 2; n <= N; n++)
    {
        for(i = 0; i < size; i++)      // Loop for multiplying numbers n and res[]
        {
            mul = (res[i] * n) + carry;  // Product of n with each digit + carry from previous operation
            res[i] = mul % 10;           // Put first digit of product with ith digit at position i itself
            carry = mul / 10;            // Remaining carry value that will be stored in later indexes
        }
 
        while(carry > 0)               // Loop for storing the remaining carry value to the array
        {
            res[size++] = carry % 10;
            carry /= 10;
        }
    }
 
    printf("\nFactorial = ");       // Printing the result
    for(i = size-1; i >= 0; i--)    // Array is stored in reverse so printing in reverse
        printf("%d", res[i]);
 
    return 0;
}