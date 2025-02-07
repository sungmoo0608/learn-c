#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
  int days, years, weeks;
  printf("총 일 수를 입력하시오 : ");
  scanf("%d", &days);

  years = (days / 365);
  weeks = (days % 365) / 7;
  days = days  - ((years * 365) +(weeks *7));

  printf("%d 년", years);
  printf("%d 주", weeks);
  printf("%d 일", days);

  return 0;

  }