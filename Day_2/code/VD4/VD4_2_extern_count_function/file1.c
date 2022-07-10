/*file 1*/
#include <stdio.h>
extern unsigned char valueData;
unsigned char valueData = 10;
void file2_Function(void);
void file3_Function(void);

void system_clock(unsigned char data);

int main()
{
  printf("001_valueData: %d\n", valueData);
  file2_Function();
  printf("002_valueData: %d\n", valueData);
  file3_Function();
  printf("003_valueData: %d\n", valueData);
}

void system_clock(unsigned char data)
{
    printf("\nsystem_clock: %d\n", data);
}


