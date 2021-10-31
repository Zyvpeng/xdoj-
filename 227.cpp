#include<stdio.h>
#include<string.h>
void fun(char*a,int*p){
	int m=strlen(a);
	int i;
	for(i=0;i<m;i++){
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'){
			(*p)++;
		}
	}
	
}
int main()
{
	int m=0;
	int *p;
	p=&m;
	char a[100]={0};
	scanf("%s",a);
	fun(a,p);
	printf("%d",m);
	return 0;
	
}
