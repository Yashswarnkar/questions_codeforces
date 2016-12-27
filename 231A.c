#include<stdio.h>
int main()	{
int a[3]={0};
int i,j;
int n,ans=0;
scanf("%d",&n);
for(i=0;i<n;i++)	{
int count=0;
for(j=0;j<3;j++)	{
scanf("%d",&a[j]);
if(a[j]>0)
count++;
}
if(count>1)
ans=ans+1;
}
printf("%d",ans);
return 0;
}
