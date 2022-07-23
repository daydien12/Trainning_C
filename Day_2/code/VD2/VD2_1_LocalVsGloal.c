/*Biến cục bộ*/
#include <stdio.h>
void myFun1(void);

#define test1 1 // cục bộ
int myScore;
int main()
{
  //int myScore;
  myScore = 999;
  printf("001gia tri cua bien myScore %d \n", myScore);
  myFun1();
}

void myFun1(void)
{
#if test1
  myScore = 888;
  printf("002gia tri cua bien myScore %d \n", myScore);
#endif
}