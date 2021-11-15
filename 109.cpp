#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	scanf("%s",a);
	char z=a[0];
	int t =strlen(a);
	char b[500];
	char c[500];
	int i,j;
	int p=0,q=0;
	for(i=0;i<t;i++){
		if(a[i]>z){
			b[p]=a[i];
			p++;
		}
		else{
			c[q]=a[i];
			q++;
		}
	}
	
	
	char f;
	for(i=0;i<q-1;i++){
		for(j=i;j<q;j++){
			if(c[j]<c[i]){
				f=c[j];
				c[j]=c[i];
				c[i]=f;
			}
		}
	}
printf("%s%s",b,c);
return 0;
}
