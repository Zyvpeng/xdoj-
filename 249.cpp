#include<stdio.h>
int main()
{
	int n,i,m,isprime=1;
	scanf("%d",&n);
	for(i=2;;i++){
		for(m=2;m<n;m++){
			if(n%m==0){
			isprime =0;
			break;	
			}
		}
		if (isprime ==0){
			for(i=2;i<n;i++){
				if(n%i==0){
					printf("%d*",i);
					n/=i;
					break;
				}
			}
		}else if(isprime==1){
		printf("%d",n);
		break;
	}
	isprime=1; 
  }
  return 0;
}
