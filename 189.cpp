 #include<stdio.h>
 int main()
 {
 	int n,i;
 	scanf("%d",&n);
 	double s=100,h,p=100;
 	for(i=1;i<n;i++){
 		p/= 2.0;
 		s+=p*2;
	 }
	 p/=2.0;
	 printf("S=%.3f h=%.3f",s,p);
	 return 0;
 }
