#include<stdio.h>
int main()
{
	int n,i=0,count=0,cnt=0,p;
	int ok=1;
	int a[50],b[50];
	scanf("%d",&n);
	for(p=0;p<50;p++){
		a[p]=0;
		b[p]=0;
	}
	while(n!=0){
		a[i]=n%10;
		b[i]=a[i];
		cnt+=a[i];
		n/=10;
		count++;
		i++;
	}
	for(i=0;i<count;i++){
		if(a[i]!=b[count-1-i]){
			ok =0;
			break;
		}
		
	}
	if(ok==1){
		printf("%d",cnt);
	} else
	{
		printf("no");
	}
	return 0;
}
