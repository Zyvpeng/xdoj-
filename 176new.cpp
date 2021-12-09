#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i,q=0,p=0;
	int j,h=1;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(a[j]>a[i]){
				p++;
			}else if(a[j]<a[i]){
				q++;
			}
		}
		
		for(j=i+1;j<n;j++){
			if(a[j]>a[i]){
				p++;
			}else if(a[j]<a[i]){
				q++;
			}
		}
		
		if(p==q){
			printf("%d",a[i]);
			h=0;
			break;
		}
		p=0;
		q=0;
	}
	
	if(h==1){
		printf("-1");
		
	}
	return 0;
	
}
