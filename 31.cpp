#include<stdio.h>
int main()
{
	int a,b,min,i,t=1;
	scanf("%d %d",&a,&b);
	if(a==0){
		t=b;
	}
	if(b==0){
		t=a;
	}
	if(a>b){
		min=b;	
	}else min=a;
	for(i=min;i>=1;i--){
		if(a%min==0&&b%min==0){
			break;
		}
	}
	if(i!=0) printf("%d",i);
	 else {printf("%d",t);}
	return 0;
}
