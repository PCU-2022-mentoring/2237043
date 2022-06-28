// 09. 난수
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();

int main()
{
  srand((unsigned)time(NULL));

  for(int i=0; i<5; i++)
  {
    printf("%d\n", b_rand());
  }
}

int b_rand()
{
  return (rand() % 2);
}
