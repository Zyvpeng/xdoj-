#include<stdio.h>

int main()

{
	char cal[3][10];
	int i=0,j,h;
	for(i=0;i<3;i++){
	
	scanf("%s",cal[i]);
}
	char t;
	i=0;
	while(i<3){
		if(cal[i][0]=='+'||cal[i][0]=='-'||cal[i][0]=='*'||cal[i][0]=='/'||cal[i][0]=='%'){
			t=cal[i][0];
//			printf("%c",t);
			h=i;
			break;
		}
		i++;
	}
	int p,q; 
	int m=0,n=0;
	for(p=0;p<3;p++){
		if(p!=h){
			for(j=0;cal[p][j];j++){
//				printf("%d ",cal[p][j]-'0');
				m=(m*10+(cal[p][j]-'0'));
//				printf("%d\n",m);
			}
			
			break;
		}
	}
	for(q=p+1;q<3;q++){
		if(q!=h){
			for(j=0;cal[q][j];j++){
				n=n*10+cal[q][j]-'0';
			}
//			printf("%d\n",n);
			break;
		}
	}
	
	switch(t){

	case'+':
	printf("%d",m+n);
	break;
		
	case'-':
	printf("%d",m-n);
	break;
	
	case'*':
	printf("%d",m*n);
	break;
	
	case'/':
	printf("%d",m/n);
	break;

	case'%':
	printf("%d",m%n);
	break;
	
}
	return 0;
}

