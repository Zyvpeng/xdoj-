#include<stdio.h>
int main()
{
	char a[100]={0};
	scanf("%s",a);
	int i=1;
	while(a[i]!=0){
		if(a[i]>a[0]){
			printf("%c",a[i]);
		}
		i++;
	}
	
	printf("%c",a[0]);
	i=1;
	int j=0,p=0;
	char d;
	int b[100]={0};
	while (a[i]!=0){
			if(a[i]<=a[0]){
			b[j]=a[i];
			j++;
		}
		i++;
	}
	
	
	
	for(i=0;i<j-1;i++){
		for(p=i+1;p<j;p++){
			if(b[p]<b[i]){
				d=b[p];
				b[p]=b[i];
				b[i]=d;
			}
		}
	}
	
	for(i=0;i<j;i++){
		printf("%c",b[i]);
	}
	
	return 0;
}
