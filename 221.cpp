#include<stdio.h>
int m=0;
int n=0;
void count(char*a)
{
	int i;
	for(i=0;a[i]!=0;i++){
		if ((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
			m++;
		}else if(a[i]>='0'&&a[i]<='9'){
			n++;
		}
	}
	
}


int main()
{
	
	
	char a[100];
	scanf("%s",a);
	count(a);
	printf("%d,%d",m,n);
	return 0;
	
}
