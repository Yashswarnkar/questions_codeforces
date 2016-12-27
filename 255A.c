#include<stdio.h>
int main()	{
int n,a,ind,i,count=0;
scanf("%d",&n);
int arr[n+1];
for(i=0;i<=n;i++)
arr[i]=0;
for( i=1;i<=n;i++)	{
scanf("%d",&a);

arr[i%3]+=a;
if(arr[i%3]>count)	{
count=arr[i%3];
ind =i%3;
}
}
if(ind==1)
printf("chest");
else if(ind==2)
printf("biceps");
else 
printf("back");

return 0;


}
