#include<stdio.h>
int main()
{
	int a,b,i,j,p=0,count=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
		for(j=1;j<i;j++){
			if(i%j==0){
				p+=j;
			}
			
		}
			if(p==i){printf("%d\n",i);}
			p=0;
}
	return 0;
}
