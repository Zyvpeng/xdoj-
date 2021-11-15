#include<stdio.h>


int main()
{
	int num[20];
	int n;
	scanf("%d",&n);
	int i,j,t;
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	int b[n];
	int p=0,q=n-1;
	for(i=0;i<n;i++){
		if(num[i]%2==0){
			b[q]=num[i];
			q--;
		}
		else{
			b[p]=num[i];
			p++;
		}
	}
	for(i=0;i<p-1;i++){
		for(j=i;j<p;j++){
			if(b[j]<b[i]){
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	for(i=0;i<p;i++){
		printf("%d ",b[i]);
	}
	printf("  ");
	for(i=q+1;i<n-1;i++){
		for(j=i+1;j<n;j++){
				if(b[j]<b[i]){
				t=b[i];
			b[i]=b[j];
				b[j]=t;
			}
		}
	
	}
	for(i=q+1;i<n;i++){
		printf("%d ",b[i]);
	}
	
	return 0;
	
	
}
