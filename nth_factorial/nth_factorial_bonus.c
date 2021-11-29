#include<stdio.h>
int main()
{
    long n=100;
    int array[26];
    int arr=0;
    long a=0,b=1,c=0;
    //printf("%d %d ",a,b);
    c=a+b;
    array[arr]=0;
    arr++;
    for (int i = 2; i < n; i++)
    {
        if(c%2==0)
        {
            array[arr]=c;
            arr++;
        }
       // printf("%ld ",c);
        a=b;
        b=c;
        c=a+b;
    }
 int value;
 scanf("%d",&value);
 printf("%d",array[value]);   
}
