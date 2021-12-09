#include<stdio.h>
int main()
{
	int a,b,j,i=0;
	int p[20]={0};
	scanf("%d%d",&a,&b);
	int c,d,e;
	c=a&b;
	d=a|b;
	e=a^b;
	if(c==0){
		printf("0\n");
	} else{
	
	while (c!=0){
		p[i]=c%2;
		c/=2;
		i++;
	}
	
	for(j=i-1;j>-1;j--){
		printf("%d",p[j]);
	}
	printf("\n");
}
	i=0;
	for(j=0;j<20;j++){
		p[j]=0;
	}
	
		if(d==0){
		printf("0\n");
	} else{
	
	while (d!=0){
		p[i]=d%2;
		d/=2;
		i++;
	}
	for(j=i-1;j>-1;j--){
		printf("%d",p[j]);
	}
	printf("\n");
}
	i=0;
	for(j=0;j<20;j++){
		p[j]=0;
	}
	
		if(e==0){
		printf("0\n");
	} else{
	
	while (e!=0){
		p[i]=e%2;
		e/=2;
		i++;
	}
	for(j=i-1;j>-1;j--){
		printf("%d",p[j]);
	}
}
	return 0;
	
}
