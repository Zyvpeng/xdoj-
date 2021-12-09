#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j;
	char p;
	char a[100];
	scanf("%s",a);
	int t=strlen(a);	
	for(i=0;i<t-1;i++){
		for(j=i+1;j<t;j++){
			
			if(a[j]<a[i]){
				p=a[j];
				a[j]=a[i];
				a[i]=p;
			}
		}
	}
	
	printf("%s",a);
	return 0;
}
