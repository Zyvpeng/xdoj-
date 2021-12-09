#include<stdio.h>
int main()
{
	char a[13]={0};
	scanf("%s",a);
	int sum=0;
	sum+=(a[0]-'0')*1+(a[2]-'0')*2+(a[3]-'0')*3+(a[4]-'0')*4+(a[6]-'0')*5+(a[7]-'0')*6+(a[8]-'0')*7+(a[9]-'0')*8+(a[10]-'0')*9;
	
	int i,t;
	t= sum%11;
	
	if(t==10){
		t='X';
	}
	
	if(t=='X'){
		if(a[12]=='X'){
			printf("Right");
		}
		else{
				for(i=0;i<12;i++){
				printf("%c",a[i]);
			}
			printf("X");
		}
	}
	else{
		
		if(t==a[12]-'0'){
			printf("Right");
		}
		else{
			for(i=0;i<12;i++){
				printf("%c",a[i]);
			}
			printf("%d",t);
		}
	}
	return 0;
}
