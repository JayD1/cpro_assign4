#include<stdio.h>

long long m=1000000007;

int main()
{
	int n,k,i,j,l;
	scanf("%d %d",&n,&k);
	long long count=0,a[k+1][n+1];
	for(i=0;i<k+1;i++)
		for(j=0;j<n+1;j++)a[i][j]=0;
	for(j=1;j<n+1;j++)a[1][j]=1;// printf("%lld ",a[1][j]);}
	for(i=2;i<k+1;i++)
	{
		for(j=1;j<n+1;j++)
			for(l=j;l<n+1;l+=j)a[i][j]=(a[i][j]%m+a[i-1][l]%m)%m;
	}
	for(i=1;i<n+1;i++)count=(count%m+a[k][i]%m)%m;
	/*for(i=0;i<k+1;i++){
	for(j=0;j<n+1;j++)printf("%lld ",a[i][j]);
	printf("\n");}*/
	printf("%lld\n",count);
	return 0;
}
