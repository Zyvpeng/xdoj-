#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]={0};
	char x;
	gets(a);
	scanf("%c",&x);
	int t=strlen(a);
	int i,j;
	for(i=0;i<t;i++){
		if(a[i]==x){
			for(j=i;j<t;j++){
				a[j]=a[j+1];
			}
			i--;
		}
	}
	
	puts(a);
	return 0;
	
}
