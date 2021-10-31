#include<stdio.h>
void tow(char c,int n){
	int a,b,i;
	for(i=1;i<=n;i++){
		for(b=i;b<=n;b++){
			printf(" ");
		}
		for(a=1;a<=i;a++){
			printf("%c ",c);
		}
		printf("\n");
	}
}
int main()
{
	char c;
	int n;
	scanf("%c %d",&c,&n);
	tow(c,n);
	return 0;
}
