// 02.

#include <stdio.h>

int main(void)
{

  int point;
  
  // 점수 입력받기
    
  for (;;)
  {
    printf("점수 >> ");
    scanf("%d", &point);
 //점수에 따라 학점 부여하기
  if (point > 100)
  {
      printf("다시 입력하세요\n");
  }
  else if (point >= 90)
  {
      printf("%d점은 %c학점입니다.\n", point, 'A');
  }
  else if (point >= 80)   
  {
      printf("%d점은 %c학점입니다.\n", point, 'B');
  }
  else if (point >= 70)   
  {
      printf("%d점은 %c학점입니다.\n", point, 'C');
  }
  else if (point >= 50)
  {
      printf("%d점은 %c학점입니다.\n", point, 'D');
  }
  else if (point >= 0)
  {
      printf("%d점은 %c학점입니다.\n", point, 'F');
  }
  else
  {
      printf("종료합니다...\n");
      break;
  }
  }
  return 0;
}