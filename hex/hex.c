#include<stdio.h>
#include "../binary/binary_conversion.h"
#define SIZE 50

void hex_to_decimal();
int* hex_to_binary(int num);

int main(void)
{
  char* input[SIZE];
  int choice, hex_to_ascii;
  do
  {
    printf("This program Converts Hexadecimal from and to Hexadecimal usign ASCII\n");
    printf("1) Hexadecimal to Binary\n2) Binary to Hexadecimal\n3) Exit\nChoose your conversion: ");
    scanf("%s", input);
    int size = sizeof(input)/sizeof(input)[0];
    printf("%d\n", size);

    // if(choice == 1)
    // {
    //   int hex_input;  
    //   scanf("%x", &hex_input);
    //   printf("%x\n", hex_input);
    //   int* bit = hex_to_binary(hex_input); 
    // }
    
    // for(int i = 0; i < 3; i++)
    // {
    //   hex_to_ascii = (int)input[i] - 55;
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
  for(size_t i = 0; i < 3; i++)
  {
    num /= 10;
    printf("%x\n", num);
  }
  return NULL;
}
