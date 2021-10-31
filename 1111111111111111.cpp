#include<stdio.h>
int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int days,years,i,count=0;
	scanf("%d%d",&years,&days);
	if(years%4==0&&years%100!=0||years%400==0){
		a[1]=29;
	}
	for(i=0;i<12;i++){
		if(count<days){
			count+=a[i];
		}
		else break;	
	}
	printf("%d %d",i,days-count);
	return 0;
 }
