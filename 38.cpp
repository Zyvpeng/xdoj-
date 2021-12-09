#include<stdio.h>
int main()
{
	int x,i,j=1;
	scanf("%d",&x);
	int count=0,sum=0,t;
	t=x;
	while(t!=0){
		count++;
		t/=10;
	}

	int a[count];
	t=x;
	for(i=0;i<count;i++){
		a[i]=t%10;
		sum+=t%10;
		t/=10;	
	}
	
	for(i=0;i<count;i++){
		if(a[i]!=a[count-1-i]){
			j=0;
			break;
		}
		
	}
	
	
	if(j==1){
	printf("%d",sum);
		
	}
	else{
		printf("no");
	}
	
	
	
	return 0;
}
