#include<stdio.h>
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	for(a=0;a<10;a++){
		for(b=0;b<10;b++){
			for(c=0;c<10;c++){
			
		
		
		if(a*101+b*20+c*101==n){
			printf("%d %d %d\n",a,b,c);
		}
	}
}
	}
	return 0;
}
