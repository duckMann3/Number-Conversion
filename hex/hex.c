#include<stdio.h>
#include<string.h>
#include "../binary/binary_conversion.h"
#define SIZE 10

void hex_to_decimal();
int* hex_to_binary(int num);

int main(void)
{
  int choice;
  do
  {
    printf("This program Converts Hexadecimal from and to Hexadecimal usign ASCII\n");
    printf("1) Hexadecimal to Binary\n2) Binary to Hexadecimal\n3) Exit\nChoose your conversion: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
      int* bit = hex_to_binary(0); 
    }
    
    // for(int i = 0; i < 3; i++)
    // {
    //   int* bit = decimal_to_binary(hex_to_ascii, 4);
    //   // printf("%d | ", ascii);
    //   for(size_t i = 0; i < 4; i++)
    //     printf("%d", bit[i]);
    //   printf("%s", " | ");
    // }
  }while(choice != 3);

  return 0;
}

int* hex_to_binary(int num)
{
  char hex_input[SIZE];
  char* endptr;
  long int hex_to_ascii, num;
  printf("Input your Hexadecimal Value: ");
  scanf("%s", hex_input);
  for(size_t i = 0; i < strlen(hex_input); i++)
  {
    num = strol(hex_input, )
    if(*endptr != '\0')
    {
      printf("Char was found: %c", *endptr);
    }
    else
    {
      printf("Int was found: %ld", num;)
    }
    // printf("%c, ", hex_input[i]);
    // int char_to_int = hex_input[i] - '0';
    // hex_to_ascii = (int)hex_input[i] - 55;
    // printf("%d %d\n", hex_to_ascii, char_to_int);
  }
  return NULL;
}
