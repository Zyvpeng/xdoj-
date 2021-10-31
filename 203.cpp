#include<stdio.h>

void cal(int a,int b, char c){
	switch(c){
		case'+':printf("%d+%d=%d",a,b,a+b);break;
		case'-':printf("%d-%d=%d",a,b,a-b);break;
		case'*':printf("%d*%d=%d",a,b,a*b);break;
	    case'/':printf("%d/%d=%d",a,b,a/b);break;
		case'%':printf("%d%%%d=%d",a,b,a%b);break;
	}
}

int main()
{
	int a,b;
	char c;
	scanf("%d %d %c",&a,&b,&c);
	cal(a,b,c);
	return 0;
}
