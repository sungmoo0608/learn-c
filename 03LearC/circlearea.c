#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

int main(void)
{
  double radius;
  double area;

  printf("반지름을 입력하세요 : ");
  scanf("%lf", &radius);

  area = PI * radius * radius;

  printf ("원의 면적 : %f \n",area);

  return 0;
}