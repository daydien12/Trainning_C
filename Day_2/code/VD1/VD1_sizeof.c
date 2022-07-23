#include <stdio.h>

#define test 0

typedef struct
{
  char A;
  char B;
  unsigned int c;
} Sizee;

int main() {

  if (test == 1)
  {
    printf("Kich co cua kieu du lieu char la: %ld", sizeof(char));
    printf("\nKich co cua kieu du lieu int la: %d",  (int)sizeof(int));
    printf("\nKich co cua kieu du lieu float la: %d",  (int)sizeof(float));
    printf("\nKich co cua kieu du lieu double la: %d",  (int)sizeof(double));
    printf("\nKich co cua kieu du lieu void la: %d \n",  (int)sizeof(void));
  }
  else
  {
    printf("Kich co cua kieu du lieu Sizee la: %d \n",  (int)sizeof(Sizee));
  }

  return 0;
}