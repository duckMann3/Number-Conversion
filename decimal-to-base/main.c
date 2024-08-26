#include<stdio.h>
#include<string.h>

#define SIZE 50

int main(void)
{
  int dividend, divisor, remainder, quotient;
  int str[SIZE];
  printf("This program converts Decimal Values to Any Base\n");

  printf("Type in a number (decimal):  ");
  scanf("%d", &dividend);
  printf("Choose a base: ");
  scanf("%d", &divisor);
  
  int i = 0;
  do
  {
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    dividend = quotient;
    str[i] = remainder;
    i++;
  }
  while(quotient != 0);
  for(int j = i - 1; j >= 0; j--)
  {
    printf("%d", str[j]);
  }

  return 0;
}
