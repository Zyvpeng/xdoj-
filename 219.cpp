#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,h=1;
	if(n==1){
		h=0;
	}
	for(i=2;i<n;i++){
		if(n%i==0){
			h=0;
			break;
		}
	}
	if(h==0){
		printf("NO");
	}else{
		printf("YES");
	}
	return 0;
}
