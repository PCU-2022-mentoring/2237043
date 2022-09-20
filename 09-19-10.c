// 안항 멘티 함수 1번
/*
인자로 정수 두개 입력받고 그 두수를 더하여 리턴하는 add함수를 만드시오.
*/

#include <stdio.h>

void add(int a, int b); // 함수 원형 사용, 매개변수 사용

int main()
{
  int a, b;

  scanf("%d %d", &a, &b);

  add(a, b);

  return 0;
}

void add(int a, int b)
{
  printf("%d\n", a + b);
}
