#include<stdio.h>

int main(void)
{
  int arr[10] = {1,2,3,4};
  long int input;
  int (*ptr)[10] = &arr;
  for(size_t i = 0; i < sizeof(int) << 3; ++i)
  {
    printf("%ld", ptr[i]);
  }
  // printf("%ld", SIZEOF(arr));

  return 0;
}
