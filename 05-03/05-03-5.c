//05.
#include <stdio.h>

int main (void)
{
  int i, j;
  for(i=0; i<5; i++)
  {
    for(j=i; j<5; j++)
    {
      printf(" ");
    }

    for(j=0; j<=i; j++)
    {
      printf("%d", i);
    }

    for(j=1; j<=i; j++)
    {
      printf("%d", i);
    }
    printf("\n");
  }
  return 0;
}