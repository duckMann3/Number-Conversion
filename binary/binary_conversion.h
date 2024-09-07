#ifndef BINARY_CONVERSION_H
#define BINARY_CONVERSION_H
#include<stdlib.h>

long int binary_to_decimal(long int num);
int* decimal_to_binary(long int num, size_t bits);

int power(int base, int exp)
{
  if(exp == 0)
    return 1;
  return base*power(base, exp - 1);
}

long int binary_to_decimal(long int num)
{
  long int dividend, result = 0, exp = 0;
  dividend = num;
  while(dividend != 0)
  {
    result += (dividend % 10) * power(2, exp);
    dividend /= 10;
    exp++;  
  }
  return result;
}

int* decimal_to_binary(long int num, size_t bits)
{
  
  // size_t bytes = sizeof(int); // 4 bytes (Since 1 byte = 8 bits, 4 bytes = 32 bits)
  // size_t bits = bytes;        // 32 bits

  int* bit_array = (int*)malloc(bits);
  do
  {
    bit_array[bits - 1] = num % 2;
    num /= 2;
    bits--;
  }while(num != 0);
  return bit_array;
}


// 
// void decimal_to_binary(long int input)
// {
//   long int dividend, rem[SIZE], itr = 0;
//   dividend = input;
//   do
//   {
//     rem[itr] = dividend % 2;
//     dividend /= 2;
//     itr++;
//   }while(dividend != 0);
//   printf("Decimal: %ld, Conversion: ", input);
//   for(int i = itr - 1; i >= 0; i--)
//   {
//     printf("%ld", rem[i]);
//   }
//   printf("\n");
// }

#endif


