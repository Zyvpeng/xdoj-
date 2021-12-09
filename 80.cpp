#include<stdio.h>
int main()
{
	char a;
	int b;
	char c[100]={0};
	scanf("%c",&a);
	scanf("%d",&b);
	scanf("%s",c);
	int i=0,count=0;
	
	if(b==0){
		if(a>='a'&&a<='z'){
			while(c[i]!=0){
				if(c[i]==a||c[i]==a-32){
					count++;
				}
				i++;
				
			}
		}
		
		
		
		 else if(a>='A'&&a<='Z'){
			while(c[i]!=0){
				if(c[i]==a||c[i]==a+32){
					count++;
				}
				i++;
				
			}
		}
	}
	
	
	else if(b==1){
				if(a>='a'&&a<='z'){
			while(c[i]!=0){
				if(c[i]==a){
					count++;
				}
				i++;
				
			}
		}
		
		
		
		 else if(a>='A'&&a<='Z'){
			while(c[i]!=0){
				if(c[i]==a){
					count++;
				}
				i++;
				
			}
		}
		
	}
	
	
	printf("%d",count);
	return 0;
	
}
