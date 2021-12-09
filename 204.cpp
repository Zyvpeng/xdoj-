#include<stdio.h>
#include<string.h>
int main()
{
	char a[100]={0},b[100]={0};
	gets(a);
	gets(b);
	
	int i,j,h=1,p,count=0;
	int x=strlen(b);
	int t=strlen(a);
	

	for(i=0;i<t;i++){
		if(a[i]==b[0]){
			
			if(i!=0){
				if(a[i-1]!=' '){
					h=0;
				}
			}
			for(j=i,p=0;j<i+x;j++,p++){
				if(a[j]!=b[p]){
					h=0;
					break;
				}
			}
	
			if(a[j]!=' '&&(j!=t)){
				h=0;
			} 
	
			
			if(h==1){
			
				count++;
			}
			h=1;
		}
	}
	
	printf("%s %d",b,count);


	return 0;
	
}
