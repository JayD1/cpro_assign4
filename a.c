#include<stdio.h>
long long int arr[100000000];
long long int fib(long long int n)
{
    if(arr[n]!=-1) return arr[n];
    if(n<=1) return 1;
    arr[n]=fib((n+1)/2)*fib(n/2)+fib((n-1)/2)*fib((n-2)/2);
    return arr[n];
}
int main()
{
  long long int i;
  for(i=0;i<100000000;i++)arr[i]=-1;
  printf("%lld",fib(1000000));
  return 0;
}
