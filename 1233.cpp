#include<stdio.h>
int main(void){
 int m,n,i,j;
 int array[100][100];
 int num=1;//��ӡ�� 
 int iStart,iEnd,jStart,jEnd;
 scanf("%d%d",&m,&n);
 iStart=0;
 iEnd=m-1;
 jStart=0;
 jEnd=n-1;
 while(iEnd>=iStart&&jEnd>=jStart){
  //������� 
  for(j=jStart;j<=jEnd;j++){
   array[iStart][j]=num;
   num++;
  }
  iStart++;
  //�ұߵ���
  for(i=iStart;i<=iEnd;i++){
   array[i][jEnd]=num;
   num++;
  }
  jEnd--;
  //������� 
  if(iEnd>=iStart){
   for(j=jEnd;j>=jStart;j--){
    array[iEnd][j]=num;
    num++;
   }
   iEnd--;
  }
  //��ߵ��� 
  if(jEnd>=jStart){
   for(i=iEnd;i>=iStart;i--){
    array[i][jStart]=num;
    num++;
   }
   jStart++;
  }
 }
 for(i=0;i<m;i++){
  for(j=0;j<n;j++){
   printf("%d ",array[i][j]);
  }
  printf("\n");
 }
 return 0;
} 
