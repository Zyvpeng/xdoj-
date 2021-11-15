#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char a[200]={0};
	char b[200]={0};
	gets(a);

	int t=strlen(a);
	while(a[t-i-1]!=0){
		b[i]=a[t-i-1];
		i++;
	}
	puts(b);
	return 0;
	
}
