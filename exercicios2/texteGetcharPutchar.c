#include <stdio.h>

void main(){

int x,y,z, cal, cal1, cal2, cal3, cal4, cal5;

printf("Entre com o valor de x: ");
scanf("%d", &x);
printf("Entre com o valor de x: ");
scanf("%d", &y);

cal = (x = y = 10);
cal1 = (z = ++x);
cal2 = (x = -x);
cal3 = (y *= x + 1);
cal4 = y++;
cal5 = (x=x+y-(z--));

printf("\n 1 %d", cal);
printf("\n 2 %d", cal1);
printf("\n 3 %d", cal2);
printf("\n 4 %d", cal3);
printf("\n 5 %d", cal4);
printf("\n 6 %d", cal5);
}