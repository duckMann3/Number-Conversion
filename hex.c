#include<stdio.h>
#define SIZE 50
// BDF
void hex_to_decimal();

int main(void)
{
  char input[SIZE];
  int ascii;
  printf("This program tests ASCII Values: ");
  scanf("%s", input);
  for(int i = 0; i < 3; i++)
  {
    ascii = (int)input[i] - 55;
    printf("%d | ", ascii);
  }

  return 0;
}

