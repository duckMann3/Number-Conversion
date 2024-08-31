#include<stdio.h>
#include<math.h>
#include "binary_conversion.h"

void binary_to_decimal();
void decimal_to_binary();

int main(void)
{
  int choice; long int input;
  printf("This program converts binary to decimal: \n");
  do
  {
    printf(" 1) Convert Binary to Decimal\n 2) Convert Decimal to Binary\n 3) Exit\n Select your conversion: ");
    scanf("%d", &choice);
    while(choice != 1 && choice != 2 && choice != 3) 
    {
      printf("INVALID OPTION\n");
      printf(" 1) Convert Binary to Decimal\n 2) Convert Decimal to Binary\n 3) Exit\n Select your conversion: ");
      scanf("%d", &choice);
    }
    printf("Choose your number: ");
    scanf("%ld", &input);
    if(choice == 1)
    {
      binary_to_decimal(input);
    }
    else if(choice == 2)
    {
      decimal_to_binary(input); 
    }
    else if(choice == 3)
    {
      printf("EXITING PROGRAM...");
      break; 
    }
    printf("\n");
  }while(choice == 1 || choice == 2);
  return 0;
}


