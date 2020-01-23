// Demonstrates overflow characteristics of unsigned vs signed integers
#include <stdio.h>
void main(void){
short x = 32767;
unsigned short y = 65535;
printf("x=%d, y=%d\n", x,y);
printf("x+1, y+1\n---------\n");
x = x + 1;
y = y + 1;
printf("x=%d, y=%d\n", x,y);
}
