#include <stdio.h>
 
int main() {
 int d1, d2;
float  m1, m2;
scanf("%d %d", &d1, &d2);
m1 = 7.86 * 3.1415926 * (d1 / 20.0) * (d1 / 20.0) * (d1 / 20.0) * 4 / 3;
m2 = 19.3 * 3.1415926 * (d2 / 20.0) * (d2 / 20.0) * (d2 / 20.0) * 4 / 3;
printf("%.3f %.3f", m1, m2);
 
return 0;
}
