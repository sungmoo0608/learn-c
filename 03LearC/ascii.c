#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  char c;

  c = 'A';
  printf("A의 아스키 코드 값 = %d \n ",c);

  printf("문자를 입력하시오 : ");
  scanf("%c", &c);

  printf("%c의 아스키 코드 값 = %d \n", c, c);

  return 0;

  }