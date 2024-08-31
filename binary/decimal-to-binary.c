#include<stdio.h>
#define SIZE 50

int main(void)
{
  int dividend, itr = 0;
  printf("This program converts decimal to binary: ");
  scanf("%d", &dividend);
  int rem[SIZE];
  do
  {
    rem[itr] = dividend % 2; 
    dividend = dividend / 2;
    itr++;   
  }
  while(dividend != 0);
  for(int i = itr-1; i >= 0; i--)
  {
    printf("%d", rem[i]);
  }
}
