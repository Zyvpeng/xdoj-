#include<stdio.h>
int main(void){
 int m,n,i,j;
 int array[100][100];
 int num=1;//打印数 
 int iStart,iEnd,jStart,jEnd;
 scanf("%d%d",&m,&n);
 iStart=0;
 iEnd=m-1;
 jStart=0;
 jEnd=n-1;
 while(iEnd>=iStart&&jEnd>=jStart){
  //上面的行 
  for(j=jStart;j<=jEnd;j++){
   array[iStart][j]=num;
   num++;
  }
  iStart++;
  //右边的列
  for(i=iStart;i<=iEnd;i++){
   array[i][jEnd]=num;
   num++;
  }
  jEnd--;
  //下面的行 
  if(iEnd>=iStart){
   for(j=jEnd;j>=jStart;j--){
    array[iEnd][j]=num;
    num++;
   }
   iEnd--;
  }
  //左边的列 
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
