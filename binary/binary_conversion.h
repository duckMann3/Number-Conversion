#ifndef BINARY_CONVERSION_H
#define BINARY_CONVERSION_H
#define SIZE 50
#include<math.h> 
#include<stdio.h>

void binary_to_decimal(long int input);
void decimal_to_binary(long int input);

void binary_to_decimal(long int input)
{
  long int dividend, result = 0, exp = 0;
  dividend = input;
  while(dividend != 0)
  {
    result += (dividend % 10) * pow(2, exp);
    dividend /= 10;
    exp++;  
  }
  printf("Binary: %04ld, Conversion: %ld\n", input, result);
}

void decimal_to_binary(long int input)
{
  long int dividend, rem[SIZE], itr = 0;
  dividend = input;
  do
  {
    rem[itr] = dividend % 2;
    dividend /= 2;
    itr++;
  }while(dividend != 0);
  printf("Decimal: %ld, Conversion: ", input);
  for(int i = itr - 1; i >= 0; i--)
  {
    printf("%ld", rem[i]);
  }
  printf("\n");
}

#endif


