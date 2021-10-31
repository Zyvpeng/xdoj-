#include<stdio.h>
int main()
{
	int a[1000],b[1000],sum=0,i=0,p;
	while(1){
		scanf("%d",&a[i]);
		
		if(a[i]==0){
			break;	
		}
		i++;
	}
	 if(a[0]==1){
	 	b[0]=1;
	 }else if(a[0]==2){
	 	b[0]=2;
	 }
	 
	 for(p=1;p<i;p++){
	 	if(a[p-1]==1&&a[p]==2){
	 		b[p]=2;
		 }
		 else if(a[p-1]==2&&a[p]==2){
		 	b[p]=b[p-1]+2;
		 }
		 else {
		 	b[p]=1;
		 }
	 }
	 for(p=0;p<i;p++){
	 	sum +=b[p];
	 }
	 printf("%d",sum);
	return 0;
	
}
