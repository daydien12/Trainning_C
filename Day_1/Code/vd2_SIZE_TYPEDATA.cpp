#include <stdio.h>                                                                                                                                                                 
#define BYTE_SIZE 8

int main()
{

  int sizeof_int = sizeof(int) * BYTE_SIZE;
  int sizeof_long = sizeof(long) * BYTE_SIZE;
  int sizeof_ptr = sizeof(&sizeof_int) * BYTE_SIZE;

  printf("Size of int: %d, long: %d, pointer: %d\n", sizeof_int, sizeof_long, sizeof_ptr );
}
