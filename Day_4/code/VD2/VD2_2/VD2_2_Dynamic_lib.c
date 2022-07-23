
#include <stdio.h>
#include "sum.h"

/*
chỉ cần buil lại file thư viện
gcc -c -fPIC sum.c sum_version.c 
gcc -shared -o libsum.a sum.o sum_version.o
ls /lib
sudo cp libsum.a /lib
*/
int main()
{
    lib_version();
    printf("%d \n", Lib_sum(10,20));
    return 0;
}