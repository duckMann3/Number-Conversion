#ifndef BINARY_CONVERSION_H
#define BINARY_CONVERSION_H
#include<stdlib.h>

long int binary_to_decimal(long int num);           // Converts binary numbers to decimal
/* Example: 0011 to deciaml (base 10)
 *  0     0     1     1
 * 2^3   2^2   2^1   2^0
 * ---------------------
 *  0  +  0  +  2  +  1 = 3 
*/
int* decimal_to_binary(long int num, size_t bits);  // Converts decimal numbers to binary
/* Example: 3 to binary (base 2)
 * Int \ Rem
 *  3  \  1   Divide 3 by 2 & check how many times 2 goes into 3 (1 times), then write the remainder below 3
 *  1  \  1   Divide 1 by 2 & check how many times 1 goes into 1 (0 times), 
 *  = 0011 (4-bits)
 * */

int power(int base, int exp)                        // Performs exponential operation from 'math.h'
{
  if(exp == 0)
    return 1;
  return base*power(base, exp - 1);
}

long int binary_to_decimal(long int num)
{
  long int result = 0, exp = 0;                     // store the output in 'result' & ''
  while(num != 0)                                   // While loop until 'num' is divided to 0
  {
    result += (num % 10) * power(2, exp);           // Add binary digit returned from (num % 10) & multiply with exponentional to 'result'  
    num /= 10;                                      // 
    exp++;                                          // Increment exponentail
  }
  return result;                                    // Return 'result'
}

int* decimal_to_binary(long int num, size_t bits)
{
  int* bit_array = (int*)malloc(bits);
  do
  {
    bit_array[bits - 1] = num % 2;
    num /= 2;
    bits--;
  }while(num != 0);
  return bit_array;
}

#endif


