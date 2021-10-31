#include<stdio.h>
int main()
{
	int a=0,b=0,c=0,d=0,e=0,f=0,x=0;
	scanf("%d",&x);
	for(x=x;x>=100;x-=100){
		a++;
	}
		for(x=x;x>=50;x-=50){
		b++;
	}
		for(x=x;x>=20;x-=20){
		c++;
	}
		for(x=x;x>=10;x-=10){
		d++;
	}
		for(x=x;x>=5;x-=5){
		e++;
	}
		for(x=x;x>0;x-=1){
		f++;
	}
	printf("%d %d %d %d %d %d",a,b,c,d,e,f);
	return 0;
}
