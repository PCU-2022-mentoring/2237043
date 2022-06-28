#include <stdio.h>
 
void print_menu();
void check_menu_number(int n); 
void call_menu(int n);
 
int main() {
    print_menu();
 
    return 0;
}
 
void print_menu() {
    static int n;
 
    printf("============================\n");
    printf(" 1. 햄버거 \n");
    printf(" 2. 치즈버거 \n");
    printf(" 3. 샌드위치 \n");
    printf(" 4. 종료 \n");
    printf("============================\n");
 
    printf("원하는 메뉴를 선택하시오: ");
    scanf("%d", &n);
 
    check_menu_number(n);
}
void check_menu_number(int n) {
    if(n < 1 || n > 4)
        print_menu();
    else
        call_menu(n);
}
void call_menu(int n) {
    if(n == 1)
        printf("1번 메뉴가 선택되었습니다. \n");
    else if(n == 2)
        printf("2번 메뉴가 선택되었습니다. \n");
    else if(n == 3)
        printf("3번 메뉴가 선택되었습니다. \n");
    else
        printf("4번 메뉴가 선택되었습니다. \n");
}