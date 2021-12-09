#include<stdio.h>
int main()
{
	
int n,t;
	scanf("%d",&n);
	int a[n],b[n];
	int i,j,p,count=0;;
	 
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	} 
	
	
	for(i=0;i<n;i++){
		t=a[i];
		
		while(t!=0){
			count+=t%10;
			t/=10;
		}
		b[i]=count ;
		count=0;
	}
	
	
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(b[j]>b[i]){
				t=b[j];
				b[j]=b[i];
				b[i]=t;
				
				
				t=a[j];
				a[j]=a[i];
				a[i]=t;
				
			}
		}
	}
	
	
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			
			if(b[j]==b[i]&&a[j]<a[i]){
				
				t=b[j];
				b[j]=b[i];
				b[i]=t;
				
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
			
		
	}
	
	
	for(i=0;i<n;i++){
		
		printf("%d %d\n",a[i],b[i]);
		
	}
	
	return 0;
}
