#include<stdio.h>
int main()
{
	int i,count=0;
	for(i=100;i<=500;i++){
		if(i%7==0 && i%11!=0||i%11==0&&i%7!=0){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
