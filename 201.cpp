#include<stdio.h>
int main()
{

	int a[10];
	int b[9];
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<9;i++){
		b[i]=a[i+1]/a[i];
	}
	for(i=0;i<9;i++){
		printf("%d ",b[i]);
	}
	return 0;
}
