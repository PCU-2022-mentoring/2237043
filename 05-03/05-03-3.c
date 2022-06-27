// 03.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)

{
    srand((unsigned)time(NULL));

    int comsu,usersu;

    printf("0~100사이의 숫자\n");

    comsu =rand()%101;
    
    while (1)
    {
            printf(">> ");
            scanf("%d",&usersu);

            if (usersu>comsu)

            {
                printf("DOWN\n");
            }

            else if(usersu<comsu)

            {
                printf("UP\n");
            }

            else
            {
                printf("정답입니다\n");
                break;
            }
    }
     printf("종료합니다.\n");
    return 0;

}