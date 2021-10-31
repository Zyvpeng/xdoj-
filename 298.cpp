#include<stdio.h>
int main()
{
	int a,b,i,j,t;
	scanf("%d %d",&a,&b);
	int c[4]={(a+b)*(a+b),(a-b)*(a-b),a*a+b*b,a*a-b*b};
	for(i=0;i<3;i++){
		for(j=i+1;j<4;j++)
		if(c[i]>c[j]){
			t=c[i];
			c[i]=c[j];
			c[j]=t;
		}
		
	}
	printf("%d %d",c[3],c[0]);
	return 0;
}
