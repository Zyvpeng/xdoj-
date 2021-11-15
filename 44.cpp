#include<stdio.h>

int fibcount(int n){
	int x=1,a=0,t;
	while(n>1){
		t=x;
		x+=a;
		a=t;
		n--;
	}
	return x;
}



void judge(int n){
	
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
		printf("%d",n);
	}else{
		printf("yes");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int z=fibcount(n);
	judge( z);
	return 0;
}
