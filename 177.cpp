#include<stdio.h>
int main()
{
	char a[101]={0};
	int sum=0,i=0;
	scanf("%s",a);
	while(a[i]!=0){
		sum+=a[i++];
	}
	sum=0xff &sum; //�ð�λ�����ָ���ֽ����� 
	printf("%d",sum);
	return 0;
}
