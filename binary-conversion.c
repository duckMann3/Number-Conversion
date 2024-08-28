#include<stdio.h>
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
    if(choice == 1)
    {
      decimal_to_binary(); 
    }
    else if(choice == 2)
    {
      
    }
    else if(choice == 3)
    {
      break; 
    }
    else 
    {
      
    }
    printf("\n");
  }while(choice == 1 || choice == 2);
  return 0;
}

void binary_to_decimal()
{

}

void decimal_to_binary()
{
  int input, dividend, rem[SIZE], itr = 0;
  printf("Enter your number (decimal): ");
  scanf("%d", &input);
  dividend = input;
  do
  {
    rem[itr] = dividend % 2;
    dividend /= 2;
    itr++;
  }while(dividend != 0);
  printf("Result: %d, ", input);
  for(int i = itr - 1; itr >= 0; itr--)
  {
    printf("%d", rem[i]);
  }
}

