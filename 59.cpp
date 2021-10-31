#include <stdio.h>
#define PI 3.1415926 
int main()
{
 int a,b,r,R;  
 float m,M;
 scanf("%d %d",&a,&b);
 r=a/20.0;
 R=b/20.0;   
    m=7.86*PI*r*r*r*4.0/3;
    M=19.3*PI*R*R*R*4.0/3; 
 printf("%.3f %.3f\n",m,M);  
 return 0;
}
