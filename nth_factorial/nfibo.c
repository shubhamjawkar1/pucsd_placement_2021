#include<stdio.h>
int fibo(int n)
{
if(n<=1)
{
return n;
}
  return fibo(n-2)+fibo(n-1);
}  
int main()
{
    int n;
    scanf("%d",&n);
    int ans= fibo(n);
    printf("%d",ans);
}
