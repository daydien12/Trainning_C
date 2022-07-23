/*đặt trùng tên biến cục bộ và toàn cục*/
#include <stdio.h>

int valueA = 5;

int main()
{
  {
    int valueB = 20;
    printf("valueB: %d \n", valueB);
    printf("valueA: %d \n", valueA);
  }
  int valueB;
  valueB = valueB + 10;
  printf("valueB: %d \n", valueB);
}

