#include<stdio.h>
int main()
{
	int	n,i,j,q=0;
	int c1=0,c2=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j]<a[i]){
				c1++;
			}
			if(a[j]>a[i]){
				c2++;
			}
		}

		if(c1==c2){
			printf("%d",a[i]);
			q=1;
			break;
		}
		c1=0;
		c2=0;
	}
	if(q==0){
		printf("-1");
	}
	return 0;
}
