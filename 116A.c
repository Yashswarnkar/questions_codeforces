#include<stdio.h>
int main()	{
int n;
int a,b,i,d,max=0;
scanf("%d",&n);
scanf("%d%d",&a,&b);
max=b;
d=b;
for(i=1;i<n;i++)	{
scanf("%d%d",&a,&b);
d=d-a+b;
if(max<d)
max=d;
//printf("%d",max);
}
printf("%d",max);


return 0;
}
