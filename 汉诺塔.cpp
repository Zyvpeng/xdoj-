# include<stdio.h>


int i;
void move(int n,char from,char to){
	
	printf("��%d��:��%d������%c----->%c\n",i++,n,from,to);
}


void Hanio(int n,char start_pos,char tran_pos,char end_pos){
	if(n==1){
		move(n,start_pos,end_pos);
	}
	
	else{
		Hanio(n-1,start_pos,end_pos,tran_pos);
		move(n,start_pos,end_pos);
		Hanio(n-1,tran_pos,start_pos,end_pos);
	}
	
}
int main()
{
	i=1;
	int n;
	scanf("%d",&n);
	Hanio(n,'A','B','C');
	return 0;
}
