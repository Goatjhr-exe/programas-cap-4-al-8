#include <stdio.h>
#include <stdlib.h>

int a, b, c, d; //Funciones y parametros
int pal(int, int); // Funcion
void main(void)
{
a = 2;
c = 3;
d = 5;
a = pal(c, d);
printf(�\n%d %d %d %d�, a, b, c, d);
b = 4;
b = pal(b, a);
printf(�\n%d %d %d %d�, a, b, c, d);
}
int pal(int x, int y)
{
int c;
b = x * y;
c = b + y;
x++;
y = y * (y + 1);
printf(�\n%d %d %d %d�, b, c, x, y)
