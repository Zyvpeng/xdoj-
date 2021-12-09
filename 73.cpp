#include<stdio.h>
int main()
{
	char a[101]={0};
	scanf("%s",a);
	int i=0,count=0, sum=0;
	int p;
	
	while(a[i]){
		printf("%c",a[i]);
		i++;
		while(a[i]>='0'&&a[i]<='9'){
			sum=sum*10+a[i]-'0';
			count++;
			i++;
		}
		for(p=0;p<sum-1;p++){
			printf("%c",a[i-1-count]);
		}
		count=0;
		sum=0;
		
			
			
	}
	printf("\n");
	return 0;
	
}
