#include<stdio.h>
int a[100][100];
void maandian(int a[100][100],int hang,int lie){
    int i,j,k,max=0,min=0,h,l,flag=0;
    for(i=0;i<hang;i++){
        min=a[i][0];
        for(j=0;j<lie;j++){
            if(a[i][j]<min){
                min=a[i][j];
                l=j;
                max=a[i][j];
            }
        }
        for(k=0;k<hang;k++){
            if(a[k][l]>max){
                max=a[k][l];
                h=k;
            }
        }
        if(max==min&&max==a[h][l]){
            flag=1;
            printf("%d %d %d\n",h,l,min);
        }
    }
    if(flag==0){
        printf("no\n");
    }
}
int main(){
    int n,m,i,j;

    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    maandian(a,m,n);
    
    return 0;
}
