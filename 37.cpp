#include<stdio.h>
int main()
{
	int n,i,j,t,p=0,q=0;
	scanf("%d",&n);
	int a[n]={0},b[n]={0},c[n]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			b[p]=a[i];
			p++;
		}else {
			c[q]=a[i];
			q++;
		}
	}
	
	for(i=0;i<p-1;i++){
		for(j=i;j<p;j++){
			if(b[j]>b[i]){
				t=b[j];
				b[j]=b[i];
				b[i]=t;
			}
		}
	}
	for(i=0;i<p;i++){
		printf("%d ",b[i]);
	}
	
	
	for(i=0;i<q-1;i++){
	for(j=i;j<q;j++){
			if(c[j]>c[i]){
				t=c[j];
				c[j]=c[i];
			c[i]=t;
			}
		}
	}
	for(i=0;i<q;i++){
		printf("%d ",c[i]);
	}
	return 0;
	
	
	
}
