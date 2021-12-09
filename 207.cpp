#include<stdio.h>
#include<string.h>
int main()
{
	char str[10][20]={0};
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	int p=0;
	char q[20]={0};
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(str[j],str[i])<0){
				strcpy(q,str[j]);
				strcpy(str[j],str[i]);
				strcpy(str[i],q);
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%s\n",str[i]);	
		printf("\n");
		}
	
	return 0;
	
	
}
