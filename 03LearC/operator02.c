#include <stdio.h>

int main(void)
{
  int x = 9;  // 1001
  int y = 10; // 1010

  printf("%08x & %08x = %08x \n", x, y, x & y );
  printf("%08x | %08x = %08x \n", x, y, x | y );
  printf("%08x ^ %08x = %08x \n", x, y, x ^ y );
  printf("~%08x = %08x \n", x, ~x );
  
  printf("%d << 1 = %d \n", x, x<<1);
  printf("%d >> 1 = %d \n", x, x>>1);

  return 0; 
}