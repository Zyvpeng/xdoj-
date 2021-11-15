#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int max,min;
	if(a>b){
		max =a;
		min= b;
	}else{
		max =b;
		min =a;
	}



	int i,h=1;
	
	if(a==0){
		h=0;
		printf("%d",b);
	}
	
		if(b==0){
		h=0;
		printf("%d",a);
	}
	if(a!=0&&b!=0){

	for(i=min;i>0;i--){
		if(min%i==0&&max%i==0){
			printf("%d",i);
			break;
		}
	}
		}
		
	return 0;
}
