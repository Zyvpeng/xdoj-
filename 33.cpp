#include<stdio.h>


double function(int n){
	
	double x;
	if (n!=1){
	
	x= 1.0/(1+function(n-1));
}else{
	x=1;
}
return x;
}
int main()
{
	
	int n;
	scanf("%d",&n);
	double z= function(n);
	printf("%.2f",z);
	return 0;
	
}
