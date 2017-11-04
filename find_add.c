                                                                                                         #include<stdio.h>
#include<strings.h>
#include<stdlib.h>

int a=0;

void find(char arr[],int i,int j,int n,int m)
{
	int temp=1000000;
	int k,loc[500000];
	for(k=0;k<n*m;k++)if(arr[k]=='#')loc[a++]=k;
	if(a==0)
	{
		printf("-1\n");
		return;
	}
	int x,y;
	for(k=0;k<a;k++)
	{
		x=loc[k]/m;
		y=loc[k]%m;
		if(temp>abs(x-i)+abs(y-j))temp=abs(x-i)+abs(y-j);
	}
	printf("%d\n",temp);
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
	char inspec[5];
	int i,j;
	for(k=0;k<q;k++)
	{
		scanf("%s",inspec);
		scanf("%d %d",&i,&j);
		if(strncasecmp(inspec,"find",4)==0) find(arr,i-1,j-1,n,m);
		else arr[(i-1)*m+(j-1)]='#';
	}
	/*for(k=0;k<n*m;k++)
	{
		//if((k+1)%m==0&&k>0)printf("\n");
		printf("%c ",arr[k]);
	}*/
	return 0;
}
