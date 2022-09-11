#include <stdio.h>

int menu();
int usedWater(int water, int n);
int usedMilk(int milk, int n);
int usedSugar(int sugar, int n);
int usedCoffee(int coffee, int n);
void print(int water, int milk, int sugar, int coffee);

int main() {
   int coffee = 20;
   int water = 10;
   int milk = 8;
   int sugar = 7;
   int option;

   print(water, milk, sugar, coffee);

   while (1) {
      option = menu();
      switch (option) {
      case 1:
         coffee = usedCoffee(coffee, 1);
         water = usedWater(water, 2);
         if (coffee < 0 || water < 0) break;
         print(water, milk, sugar, coffee);
         break;
      case 2:
         coffee = usedCoffee(coffee, 1);
         water = usedWater(water, 1);
         if (coffee < 0 || water < 0) break;
         print(water, milk, sugar, coffee);
         break;
      case 3:
         coffee = usedCoffee(coffee, 1);
         milk = usedMilk(milk, 2);
         if (coffee < 0 || milk < 0) break;
         print(water, milk, sugar, coffee);
         break;
      case 4:
         coffee = usedCoffee(coffee, 1);
         water = usedWater(water, 2);
         sugar = usedSugar(sugar, 3);
         if (coffee < 0 || water < 0 || sugar < 0) break;
         print(water, milk, sugar, coffee);
         break;
      case 5:
      default:
         break;
      }
      if (option >= 5 || coffee < 0 || water < 0 || sugar < 0 || milk < 0) {
         printf("영업 종료\n");
         break;
      }
   }

   return 0;
}

int menu()
{
   int option;
   printf("1. 아메리카노\t2. 에스프레소\t3. 라떼\t4. 설탕커피\t5. 종료\n>>");
   scanf("%d", &option);

   return option;
}
int usedWater(int water, int n) {
   if (water < n) {
      printf("물이 부족합니다\n");
      return -1;
   }
   return water - n;
}
int usedMilk(int milk, int n) {
   if (milk < n) {
      printf("우유가 부족합니다\n");
      return -1;
   }
   return milk - n;
}

int usedSugar(int sugar, int n) {
   if (sugar < n) {
      printf("설탕이 부족합니다\n");
      return -1;
   }
   return sugar - n;
}
int usedCoffee(int coffee, int n) {
   if (coffee < n) {
      printf("커피가 부족합니다\n");
      return -1;
   }
   return coffee - n;
}
void print(int water, int milk, int sugar, int coffee) {
   printf("잔량\n");
   printf("water: %d\tcoffee: %d\tmilk: %d\tsugar: %d\n", water, coffee, milk, sugar);
}