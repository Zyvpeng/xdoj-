#include<stdio.h>
#include<string.h>
void fun(char*s1,char*s2){
	int p =strlen(s1),q=strlen(s2);
	int i;
	for(i=0;s2[i]!=0;i++){
		s1[p+i]=s2[i];
	}
	printf("%s",s1);
}
int main()
{
	char a[200]={0},b[100]={0};
	scanf("%s %s",a,b);
	fun(a,b);
	return 0;
}
