#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int m,n,i,j;
	char  t[100];
	scanf("%s",t);
	int x=strlen(t);
	scanf("%d %d",&m,&n);
	char a[n][100];
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	if(m==1)
	{
		for(i=0;i<n;i++){
			
			for(j=0;a[i][j];j++){
				if(strncmp(*(a+i)+j,t,x)==0){
					printf("%s\n",a[i]);
					break;
				}
			}
		}
		
	}
	if(m==0)
	{
		char c[100];
		char d[n][100];
		i=0;
		while(t[i]){
			c[i]=tolower(t[i]);
			i++;
		}
		j=0;
		for(i=0;i<n;i++){
			while(a[i][j]){
				d[i][j]=tolower(a[i][j]);
				j++;
			}
			j=0;
		}
		
			for(i=0;i<n;i++){
	
			for(j=0;d[i][j];j++){
				if(strncmp(*(d+i)+j,c,x)==0){
					printf("%s\n",a[i]);
					break;
				}
			}
		}
		
	}
	return 0;
}
