#include<stdio.h>

int m=1000000007;

void mat_multi(long arr[4], long long n)
{
	if(n==0)return;
	arr[0]=(arr[0]*arr[0])%m+(arr[1]*arr[2])%m;
	arr[1]=(arr[0]*arr[1])%m+(arr[1]*arr[3])%m;
	arr[2]=(arr[2]*arr[0])%m+(arr[3]*arr[2])%m;
	arr[3]=(arr[2]*arr[1])%m+(arr[3]*arr[3])%m;
	return;
}

int main()
{
	long long n;
	scanf("%lld",&n);
	long arr_perm[4]={1,1,1,0};
	while(n>=1)
	{
		if(n%2==0)
		{
			n=n>>1;
			mat_multi(arr_perm,n);
			//mat_multi(arr_perm,n);
			//printf("%lld\n",n);
			//mat_multi(arr_perm,n);
		}
		else
		{	
			mat_multi(arr_perm,1);
			n=(n-1)>>1;
			//printf("%lld\n",n);
			mat_multi(arr_perm,n);
			//mat_multi(arr_perm,n);
		}
	}
	printf("%ld\n",arr_perm[2]);
	return 0;
}

