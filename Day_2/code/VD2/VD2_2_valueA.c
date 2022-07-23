/*đặt trùng tên biến cục bộ và toàn cục*/
#include <stdio.h>

#define test1 3

int valueA = 10;

int main()
{
#if test1 == 1
  {
    int valueA = 20;
  }
#elif test1 == 2
  int valueA = 20;
  char valueA = 40;
#elif test1 == 3
  int valueA = 20; // ưu tiên biến cục bộ Local
#endif
  printf("valueA: %d \n", valueA);
}

