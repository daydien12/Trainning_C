/* 
    đếm số lần được gọi của fun1
    Test 1
        không thể đếm số lần gọi hàm
    Test 2
        Có thể đếm số lần gọi hàm nhưng các hàm khác cũng có thể thay đôi
    Test 3
        có thể đếm số lần gọi hàm nhưng các hàm khác không thể thay đôi

*/
#include <stdio.h>

#define Test 3

#if Test == 2
unsigned char count = 0;
#endif

void myFun1(void);

int main()
{
  myFun1();

  myFun1();

  myFun1();

  myFun1();

  myFun1();

  return 0;
}

void myFun1(void)
{

#if Test == 1
  unsigned char count = 0;
#elif Test == 3
  static unsigned char count = 0;
#endif
  count = count + 1;
  printf("This function executed %d time(s) \n", count);

}
