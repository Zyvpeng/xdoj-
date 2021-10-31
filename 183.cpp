#include<stdio.h>
int min(int m, int n){
	if(m<n){
		return m;
	} else return n;
}
int max(int m, int n){
	if(m>n){return m;
	}else return n;
}
int main()
{
	int m,n,p,q;
	scanf("%d %d",&m,&n);
	for(m=m,n=n,p=min(m,n);;p--){
		if(m%p==0&&n%p==0){
			break;
		}
	}
	for(q=max(m,n);;q++){
		if(q%m==0&&q%n==0){
			break;
		}
	}
	
	printf("%d %d",p,q);
	return 0;
}
