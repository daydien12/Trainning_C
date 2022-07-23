
#include<stdio.h>

/*
ví dụ về tiền sử lý
cd /mnt/c/Users/nhanma/Desktop/Training_C/Trainning_C/Day_4/code/V1
gcc -E VD1_2_Compilation.c -o vd2.i 
gcc -S VD1_2_Compilation.c -o vd2.s
*/

#define Test 1

#if Test == 1
    #define AGE 24
    #define NAME "Biên"
#else 
    #define AGE 30
    #define NAME "Dũng"
#endif 

int main()
{
    //a = 10;
    printf("Tôi tên là: %s -- tuổi: %d", NAME, AGE);
    return 0;
}