#include<stdio.h>
int main()
{
	char a[100]={0};
	gets(a);
	int i=0,j;
	char t;
	while(a[i]!=0){
		if(a[i]>='a'&&a[i]<='z'){
				j=a[i]-'a';
				a[i]='a'+25-j;
				i++;
		}
		else{
				j=a[i]-'A';
				a[i]='A'+25-j;
				i++;
		} 
	}
	puts(a);
	return 0;	
}
