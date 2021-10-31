#include<stdio.h>
int main()
{
	int x;
	char p;
	scanf("%d",&x);
	if(x>=90&&x<=100){
		p='A';
	} else if(x>=80&&x<=89){
		p='B';
	} else if(x>=70&&x<=79){
		p='C';
	} else if(x>=60&&x<=69){
		p='D';
	} else if(x>=0&&x<=59){
		p='E';
	}
	printf("%c",p);
	return 0;
}
