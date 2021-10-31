#include<stdio.h>
 

int jiaogu(int step, int num)
{

 if(1 == num)
 {
  return step;
 }

 else if(0 == num % 2)
 {
  printf("%d ", num/2);     
  ++step;       
  return jiaogu(step,num/2);      
 }
 else
 {
  printf("%d ", num*3 + 1);
  ++step;  
  return jiaogu(step, num*3 + 1);   
 }
}
 
int main()
{
 int num;
 int step = 0;
 printf("请输入一个自然数:");
 scanf("%d", &num);
 printf("\nstep = %d\n", jiaogu(step, num));
 return 0; 
}
