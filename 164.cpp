#include<stdio.h>
int main()
{
	char a[1000]={0};
	char b[1000]={0};
	scanf("%s",&a[0]);
	int i=0,j=0;
	while(a[i]!=0){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]-=32;
		}
		i++;
	}
	i=0;
	while(a[i]!=0){
		if(a[i]>='A'&&a[i]<='Z'){
			b[j]=a[i];
			j++;
			
		}
		i++;
	}
	int p;
	char q;
	for(i=0;i<j-1;i++){
		for(p=i;p<j;p++){
			if(b[p]<b[i]){
				q=b[p];
				b[p]=b[i];
				b[i]=q;
			}
		}
	}
	i=0;
	j=0;
	while(a[i]!=0){
		if(a[i]>='A'&&a[i]<='Z'){
			a[i]=b[j];
			j++;
		}
		i++;
	}
	printf("%s",a);

	return 0;
}
