#include <stdio.h>
/*

gcc -o vd VD3_1_data_segment.c -Wl,-Map,helloworld.map
*/
#define test 0

#if test == 1
/*vùng nhớ hằng*/
const int x = 5;
const int mang[10] = {1,2,3,4,5,6,7,8,9,10};
char * chuoi = "Hello World"; // Lưu vào vùng nhớ hằng
chuoi[1] = 10;
#else
int x = 5;     //Initialized Data Segment
int mang[10] = {1,2,3,4,5,6,7,8,9,10}; //Initialized Data Segment

void count(void)
{
   static char cnt = 0;  // Initialized Data Segment
   cnt++;
}

int main()
{
   static int y = 1;  // Initialized Data Segment
   return 0;
}
#endif