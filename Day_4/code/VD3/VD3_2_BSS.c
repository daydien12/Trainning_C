#include <stdio.h>

int x;     // Uninitialized Data Segment
int mang[10]; // Uninitialized Data Segment

void count(void)
{
   static char cnt;  // Uninitialized Data Segment
   cnt++;
}

int main()
{
   static int y;  // Uninitialized Data Segment
   return 0;
}