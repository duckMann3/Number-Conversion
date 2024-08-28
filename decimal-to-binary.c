#include<stdio.h>
#define SIZE 50

int main(void)
{
  int dividend, remainder, quotient, itr = 0;
  printf("This program converts decimal to binary: ");
  scanf("%d", &dividend);
  int rem[SIZE];
  do
  {
    rem[itr] = dividend % 2; 
    quotient = dividend / 2;
    itr++;   
  }
  while(quotient != 0);
  for(int i = itr-1; i >= 0; i--)
  {
    printf("%d", rem[i]);
  }
}
