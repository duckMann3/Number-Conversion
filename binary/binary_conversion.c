#include<stdio.h>
#include<stdlib.h>
#include "binary_conversion.h"

int main()
{
  int conversion_choice;
  do
  {
    printf("%s", "1) Binary to Decimal\n2) Decimal to Binary Conversion\n3) Exit\nEnter Your Choice: ");
    scanf("%d", &conversion_choice);
    
    if(conversion_choice == 1)
    {
      long int number; 
      printf("%s", "Input Your Number (Binary): ");
      scanf("%ld", &number);     
      long int result = binary_to_decimal(number);
      printf("%ld\n", result);
    }

    else if(conversion_choice == 2)
    {
      long int number; 
      int number_of_bits;
      printf("%s", "Input Your Number (Decimal): ");
      scanf("%ld", &number);
      printf("%s", "Input Number of Bits: ");
      scanf("%d", &number_of_bits);
      int* binary = decimal_to_binary(number, number_of_bits);

      for(size_t i = 0; i < number_of_bits; i++)
      {
        printf("%d", binary[i]);
      }

      printf("%s", "\n\n");
      free(binary);
    }
    else if(conversion_choice == 3)
      break; 

    else
    {
      printf("%s\n", "Try again!");
      continue;
    }
  }while(conversion_choice != 3);
  
  return 0;
}


