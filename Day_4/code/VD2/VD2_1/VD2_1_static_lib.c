
#include <stdio.h>
#include "sum.h"

/*
phải build lại thư viện và file main
gcc -c sum.c 
gcc -c sum_version.c 
ar -rcs libsum.a sum.o sum_version.o
*/
int main()
{
    lib_version();
    printf("%d \n", Lib_sum(10,20));
    return 0;
}