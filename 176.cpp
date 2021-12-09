#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	int i,j,p=1;
	int h=1;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				h=0;
				break;
			}
		}
		if(h==1){
			b[p++]=a[i];
		}
		h=1;	
	}
	
	for(i=0;i<p-1;i++){
		for(j=i+1;j<p;j++){
			if(b[j]>b[i]){
				h=b[j];
				b[j]=b[i];
				b[i]=h;
			}
		}
	}
	
	printf("%d",p);
	if(p%2==0){
		printf("-1");
	}
	else {
		printf("%d",b[(p-1)/2]);
	}

	return 0;
}
