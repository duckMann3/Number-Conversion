#include<stdio.h>
#include<math.h>
#define SIZE 50

void binary_to_decimal();
void decimal_to_binary();

int main(void)
{
  int choice;
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
    if(choice == 1)
    {
      binary_to_decimal();
    }
    else if(choice == 2)
    {
      decimal_to_binary(); 
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

void binary_to_decimal()
{
  long int input, dividend, result = 0, exp = 0;
  printf("Enter your number (binary): ");
  scanf("%ld", &input);
  dividend = input;
  while(dividend != 0)
  {
    // printf("%ld\n", dividend % 10);
    result += (dividend % 10) * pow(2, exp);
    dividend /= 10;
    exp++;  
  }
  printf("Binary: %ld, Conversion: %ld\n", input, result);
}

void decimal_to_binary()
{
  long int input, dividend, rem[SIZE], itr = 0;
  printf("Enter your number (decimal): ");
  scanf("%ld", &input);
  dividend = input;
  do
  {
    rem[itr] = dividend % 2;
    dividend /= 2;
    itr++;
  }while(dividend != 0);
  printf("Decimal: %ld, Conversion: ", input);
  for(int i = itr - 1; i >= 0; i--)
  {
    printf("%ld", rem[i]);
  }
  printf("\n");
}

