// 2022. 09.26
#include <stdio.h>

int main(void)
{
  int list[] = {3, 2, 9, 7, 1, 4, 8, 0, 6, 5};
  int j, temp, least;
  int size = sizeof(list) / sizeof(list[0]);

  for (int i = 0; i < size - 1; i++)
  {
    least = i;
    for (int j = i + 1; j < size; j++)
    {
      if (list[j] < list[least])
      {
        least = j;
      }
    }
    temp = list[i];
    list[i] = list[least];
    list[least] = temp;
  }

  for (int i = 0; i < size; i++)
  {
    printf("%d", list[i]);
  }
  printf("\n");

  return 0;
}