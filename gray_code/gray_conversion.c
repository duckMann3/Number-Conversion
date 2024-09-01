#include<stdio.h>

typedef unsigned int uint;

/*
*   Binary:   Gray Code: 
* 0  0000       0000
* 1  0001       0001
* 2  0010       0011
* 3  0011       0010
* 4  0100       0110
* 5  0101       0111
*/

uint BinarToGray(uint num);     // Converts binary number to gray code
uint GrayToBinary(uint num);    // Converts gray code to binary number
uint GrayToBianry32(uint num);  // Converts 32 bit gray code to binary number

int main(void)
{
  uint bin = 0b0010; // Decimal 2
  printf("%u\n", bin);
  printf("%u\n", BinarToGray(bin));
  return 0;
}

uint BinarToGray(uint num)
{
  return num ^ (num >> 1);
}

uint GrayToBinary(uint num)
{
  uint mask = num;
  while(mask)
  {
    mask >>= 1;
    num ^= mask;
  }
  return num;
}

uint GrayToBianry32(uint num)
{
  num ^= num >> 16;
  num ^= num >> 8;
  num ^= num >> 4;
  num ^= num >> 2;
  num ^= num >> 1;
  return num;
}
