
void count(char*a,int *p,int *q)
{
	int i;
	for(i=0;a[i]!=0;i++){
		if ((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
			(*p)++;
		}else if(a[i]>='0'&&a[i]<='9'){
			(*q)++;
		}
	}
	
}
