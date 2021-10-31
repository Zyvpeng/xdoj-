#include<stdio.h>
#include<math.h>
int main(){
	int n,i,max;
	int j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=fabs(a[0]-a[1]);
	for(j=0;j<n-1;j++){
	 if(fabs(a[j+1]-a[j])>max){
	 	max=fabs(a[j+1]-a[j]);
	 }
	}
	printf("%d",max);
	return 0;
}
