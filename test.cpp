#include<stdio.h>
int main()
{

	char a[101]={0};
	gets(a);
	int sum=0;
	int i=0;
	while(a[i]!=0){
		sum+=a[i];
		i++;
	}
	int b= sum&0xff;
	printf("%d",b);
	return 0;
 } 
