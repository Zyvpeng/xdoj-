#include<stdio.h>


void Mull(int m,int n){
	int a=1,b=1,c=1,i;
	double out;
	for(i=1;i<=m;i++){
		a*=i;
	}
	for(i=1;i<=n;i++){
	    b*=i;	
	}
	for(i=1;i<=(m-n);i++){
		c*=i;
	}
	out = a*1.0/b/c;
	printf("%.2f",out);
	
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	Mull(m,n);
	return 0;
}
