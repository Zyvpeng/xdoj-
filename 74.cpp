#include<stdio.h>

int main()
{
	char a[100]={0};
	scanf("%s",a);
	int i=0,b=0,c=0,d=0,flag=1;
	while(a[i]){
		if(a[i]=='('){
			b++;
		}
		else if(a[i]=='['){
			c++;
		}
		else if(a[i]=='{'){
			d++;
		}
		else if(a[i]==')'){
			b--;
			if(b<0){
				flag=0;
				break;
			}
		}
		else if(a[i]==']'){
			c--;
			if(c<0){
				flag=0;
				break;
			}
		}
		else if(a[i]=='}'){
			d--;
			if(d<0){
				flag=0;
				break;
			}
		}
		i++;
	}
	if(b==0&&c==0&&d==0&&flag==1){
		printf("yes");
	}
	else{
		printf("no");
		
	}
	return 0;
}
