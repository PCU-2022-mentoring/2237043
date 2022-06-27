// 01.
#include <stdio.h>

int main()
{
  int n1, n2;
  char c;
  int count = 0;

    for (count = 0; count < 10; count++)
    {
      printf("수식 >> ");
      scanf("%d %c %d", &n1, &c, &n2);

    switch(c)
    {
        case '+':
            printf("%d\n", n1+n2);
            break;

        case '-':
            printf("%d\n", n1-n2);
            break;

        case '/':
            switch (n2)
            {
            case 0:
              printf("0으로 나눌 수 없습니다.\n");
              break;
            
            default:
              printf("%f\n", n1/(float)n2);
              break;
            }
            break;

            /*if (n2 == 0)
            {
              printf("0으로 나눌 수 없습니다.\n");
            }
            else
            {
              printf("%f\n", n1/(float)n2);
            }
            break;
            */
           
        case '*':
            printf("%d\n", n1*n2);
            break;

        case '%':
            printf("%d\n", n1%n2);
            break;

        default: // +, -, *, /, % 모두 아닐때
            printf("지원하지 않는 연산자 입니다.\n");
            break;
    }
    }
    return 0;
}