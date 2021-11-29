#include<stdio.h>
int main()
{
 int h,m,s;
 scanf("%d %d %d",&h,&m,&s);
 int m1,s1;
 if(m==00&&s==00)
 {
     m1=12;
     s1=12;
 } 
 else
 m1=m/5;
 s1=s/5;
 int ans;
 if(s1>m1)
 {
    ans=(s1-m1)*30;
 }  
 else
 {
    ans=(m1-s1)*30;
 }
 printf("%d",ans);
}
