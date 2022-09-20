// 안항 멘티 반복문 2번
/*
별찍기
사용자에게 행의 길이를 입력받아 해당하는 정삼각형을 출력한다.

입력=
첫째 줄에 N이 주어진다.
N은 1보다 크거나 같고, 99보다 작거나 같은 정수이다. <- 놓침

출력
*/

#include <stdio.h>

int main(void)
{
  int N;

  printf("입력=");
  scanf("%d", &N);

  for (int i = 0; i < N; i++)
  {
    for (int k = i; k < (N - 1); k++)
    {
      printf(" ");
    }
    for (int k = 0; k <= (i * 2); k++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
