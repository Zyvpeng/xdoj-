#include<stdio.h>
#include<string.h>


char*swap(char*a,char*b){
	int i;
	int len=strlen(a);
	for(i=0;i<len;i++){
		b[i]=a[len-1-i];
		
	}
	return b;
	
}
int main()
{
	char a[200],b[200];
	gets(a);
	swap(a,b);
	puts(b);
	return 0;
}
