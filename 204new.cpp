#include<stdio.h>
#include<string.h>
int main()
{
	char a[20][20],s,t[10];
	int i=0,j,count=0;
	do{
		scanf("%s",a[i++]);
	
	}while(s=getchar()!='\n');
	
	scanf("%s",&t);
	
	for(j=0;j<i;j++){
		if(strcmp(a[j],t)==0){
			count++;
		}
	}
	printf("%s %d",t,count);
	return 0;
}
