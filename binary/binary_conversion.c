#include<stdio.h>
#include<stdlib.h>
#include "binary_conversion.h"

int main(int argc, char* argv[])
{
  if(argc != 2)
  {
    fprintf(stderr, "Expected 1 argument. Got %d.\n", argc-1);
    return 1;
  }
  else
  {
    int num = atoi(argv[1]);
    int* bits = decimal_to_binary(num);
    for(size_t i = 0; i < sizeof(int) << 3; i++)
    {
      printf("%d", bits[i]);
    }

    putchar('\n');
    free(bits);
    return 0;
  }
  // printf("This program converts binary to decimal: \n");
  // do
  // {
  //   printf(" 1) Convert Binary to Decimal\n 2) Convert Decimal to Binary\n 3) Exit\n Select your conversion: ");
  //   scanf("%d", &choice);
  //   while(choice != 1 && choice != 2 && choice != 3) 
  //   {
  //     printf("INVALID OPTION\n");
  //     printf(" 1) Convert Binary to Decimal\n 2) Convert Decimal to Binary\n 3) Exit\n Select your conversion: ");
  //     scanf("%d", &choice);
  //   }
  //   printf("Choose your number: ");
  //   scanf("%ld", &input);
  //   if(choice == 1)
  //   {
  //     binary_to_decimal(input);
  //   }
  //   else if(choice == 2)
  //   {
  //     decimal_to_binary(input); 
  //   }
  //   else if(choice == 3)
  //   {
  //     printf("EXITING PROGRAM...");
  //     break; 
  //   }
  //   printf("\n");
  // }while(choice == 1 || choice == 2);
}


