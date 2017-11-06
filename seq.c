#include<stdio.h>

long long int arr[1001][1001];

long long int select(int n,int k)
{
	if(n<k)return 0;
	if(arr[n][k]!=-1)return arr[n][k];
	if(n==k||k==0)return 1;
	arr[n][k]=select(n-1,k)+select(n-1,k-1);
	return arr[n][k];
}

int main()
{
	int n,k,i,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<1000;i++)
		for(j=0;j<1000;j++)arr[i][j]=-1;
	long long count=1;//since all 1s is always possible
	for(i=2;i<n+1;i++)
	{
		if(i*k<=n){count+=select(n/i,k);
		printf("%lld\n",count);}
		if(i*(k-1)<=n){count+=select(n/i,k-1);
		printf("%lld\n",count);}
	}
	printf("%lld\n",count);
	return 0;
}
