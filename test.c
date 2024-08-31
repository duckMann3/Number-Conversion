#include<stdio.h>

int main(void)
{
  long int input;
  printf("Input a binary number: ");
  scanf("%ld", &input);

  printf("%04ld", input);

  return 0;
}
