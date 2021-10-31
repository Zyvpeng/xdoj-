#include <stdio.h>
 
int main() 
{
 int m;
 scanf("%d", &m);
 if (m >= 90)
  printf("A");
 if (m >= 80 && m < 90)
  printf("B");
 if (m >= 70 && m < 80)
  printf("C");
 if (m >= 60 && m < 70)
  printf("D");
 if (m < 60)
  printf("E");
 return 0;}
