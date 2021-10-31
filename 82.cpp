#include<stdio.h>
#include<string.h>
int main()
{
	int n=0,n1=0,n2=0,n3=0,n4=0,n5=0;
	int len,i;
	char a[60]={0};
	gets(a);
	len =strlen(a);
	if(a[0]==0){
		n=0;
	}
	else 
	{
		if(len>8){
			n1=1;
		}
		for(i=0;i<len;i++){
			if (a[i]>='a'&&a[i]<='z'){
				n2=1;
			}
			else if(a[i]>='A'&&a[i]<='Z'){
				n3=1;
			}
			else if(a[i]>='0'&&a[i]<='9'){
				n4=1;
			}
			else 
			{
				n5=1;
			}
		}
		n=n1+n2+n3+n4+n5;
	}
	printf("%d",n);
	return 0;
	
	
}
