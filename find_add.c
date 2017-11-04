#include<stdio.h>
#include<strings.h>

void find(char arr[],int i,int j,int n,int m)
{
	int k,loc[500],a=0;
	for(k=0;k<n*m;k++)if(arr[k]=='#')loc[a++]=k;
	for(k=0;k<a;k++)printf("%d ",loc[k]);
	return;
}

int main()
{
	int n,m,k;
	scanf("%d %d",&n,&m);
	char arr[n*m];
	for(k=0;k<n*m;k++)arr[k]='.';
	int q;
	scanf("%d",&q);
	char inspec[4];
	int i,j;
	for(k=0;k<q;k++)
	{
		scanf("%s",inspec);
		scanf("%d %d",&i,&j);
		if(strncasecmp(inspec,"find",4)==0) find(arr,i-1,j-1,n,m);
		else arr[(i-1)*m+(j-1)]='#';
		//for(k=0;k<n*m;k++)
		//{
		//	printf("%c ",arr[k]);
		//	if((k+1)%m==0)printf("\n");
		//}
	}
	return 0;
}
