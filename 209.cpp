#include<stdio.h>

char * char_cp(char *a){
	int n;
	scanf("%d",&n);
	return a+n+1;
}
int main()
{
	char *p;
	char a[50]={0};
	gets(a);
	p=char_cp(a);
	puts(p);
	return 0;
}
