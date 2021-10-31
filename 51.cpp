#include<stdio.h>
int main()
{
	int a[4],max,i;
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1]){
		max=a[0];
	} else {
	max=a[1];}
	for(i=0;i<4;i++){
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("%d",max);
	return 0;
	
	
	
	}
