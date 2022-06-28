//02.
#include <stdio.h>

/* char ch;
void check_alpha()
{
    if(ch>=97&&ch<=122)
		printf("%c는 알파벳 문자입니다.\n", ch);
}
*/

void check_alpha(char y);

int main ()
{
  char y;
	printf("문자를 입력하시오: ");
	scanf("%c", &y);
	check_alpha(y);
	return 0;
}

void check_alpha(char y)
{
  if(y>=97&&y<=122)
		printf("%c는 알파벳 문자입니다.\n", y);
}