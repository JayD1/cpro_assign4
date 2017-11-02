#include<stdio.h>

int a2[4]={1,1,1,0};
long int res[4]={1,0,0,1};

long int m=1000000007;
void mat_odd(long arr[4])
{
	int i;
	res[0]=(res[0]*arr[0])%m+(res[1]*arr[2])%m;
	res[1]=(res[0]*arr[1])%m+(res[1]*arr[3])%m;
	res[2]=(res[2]*arr[0])%m+(res[3]*arr[2])%m;
	res[3]=(res[2]*arr[1])%m+(res[3]*arr[3])%m;
	for(i=0;i<4;i++){arr[i]=res[i];
		printf("res:%ld ",res[i]);}
	printf("\n");
	return;
}
void mat_evn(long arr[4], long long n)
{
	if(n==0)return;
	int i;
	res[0]=(arr[0]*arr[0])%m+(arr[1]*arr[2])%m;
	res[1]=(arr[0]*arr[1])%m+(arr[1]*arr[3])%m;
	res[2]=(arr[2]*arr[0])%m+(arr[3]*arr[2])%m;
	res[3]=(arr[2]*arr[1])%m+(arr[3]*arr[3])%m;
	for(i=0;i<4;i++){arr[i]=res[i];
		printf("res:%ld ",res[i]);}
	printf("\n");
	return;
}

void power(long arr[], long long n)
{
	if(n==1)return;
	if(n%2!=0)
	{
		mat_odd(arr);
		//mat_evn(arr,(n-1)>>1);
		//power(arr,(n-1)>>1);
		//n--;
	}
	n=n/2;
	mat_evn(arr,n);
	power(arr,n);
	return;
}

int main()
{
	long long n;
	scanf("%lld",&n);
	long arr[4]={1,1,1,0};
	power(arr,n);
	printf("%ld",res[2]);
	return 0;
}
