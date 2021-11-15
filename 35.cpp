#include<stdio.h>

int isprime(int n){
	int i,h=1;
	for(i=2;i<n;i++){
		if(n%i==0){
			h=0;
			break;
		}
	}
	if(h==0){
		return 0;
	}
	else {
		return 1;
	}
}
int main()
{
	
	int n;
	scanf("%d",&n);
	int i,p,q;
	for(i=2;i<n;i++){
		p=n-i;
		if(isprime(p)&&isprime(i)){
		
		printf("%d %d",i,p);
		break;}
	}
	return 0;
}
