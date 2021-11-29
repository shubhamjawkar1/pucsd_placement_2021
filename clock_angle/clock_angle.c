#include<stdio.h>
int main()
{
 int h,m;
 scanf("%d %d",&h,&m);
 int m1;
 if(m==00)
 {
     m1=12;
 } 
 else
 m1=m/5;
 int Hangle=m/2;
 int Mangle,ans;
 if(h>m1)
 {
    Mangle=h-m1;
    ans=(Mangle*30)+Hangle;
 }  
 else
 {
     Mangle=m1-h;
     ans=(Mangle*30)-Hangle;
 }


 
 printf("%d",ans);
}
