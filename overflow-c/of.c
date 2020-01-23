#include <stdio.h>
void main(void){
short x = 32767;
unsigned short y = 65535;
x = x + 1;
y = y + 1;
printf("x=%d, y=%d\n", x,y);
}
