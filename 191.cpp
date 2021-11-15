#include<stdio.h>
int main()
{
	char a[100]={0};
	scanf("%s",a);
	int i;
	while(a[i]!=0){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]='a'+25-(a[i]-'a');
		}
		else{
			a[i]='A'+25-(a[i]-'A');
		}
		i++;
	}
	printf("%s",a);
	return 0;
}
