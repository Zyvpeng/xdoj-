#include<stdio.h>
#include<string.h>
int main()
{
	char a[10001],b[10001];
	gets(a);
	gets(b);

	int p=strlen(a);
	int q=strlen(b);
	for(int i=0;i<p;i++){
		int h=1;
		for(int j=0;j<q;j++){
			if(b[j]==a[i]){
				h=0;
				break;
			}
		}
		
		if(h==1){
			printf("%c",a[i]);
		}
		
	}
	printf("\n");
	

	
	return 0;
	
}
