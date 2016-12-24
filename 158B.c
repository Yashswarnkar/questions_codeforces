#include<stdio.h>
int main()	{
int i,j,ans=0;
int arr[4]={0};
int n;
scanf("%d",&n);
for(i=0;i<n;i++)	{
scanf("%d",&j);
arr[j-1]+=1;
//printf("%d\n",arr[j-1]);
}
ans= ans+ arr[3];
//printf("%d%c",ans,'d');
arr[3]=0;
if(arr[0]>arr[2])	{
ans=ans+arr[2];
arr[0]=arr[0]-arr[2];
arr[2]=0;
}
else 	{
ans=ans+arr[0];
arr[2]=arr[2]-arr[0];
arr[0]=0;

}
//printf("%d%c",ans,'c');
ans = ans + (arr[1]/2);
//printf("%d%c",ans,'b');
if(arr[1]%2==0)	{
arr[1]=0;
}
ans= ans + arr[1]%2;

//printf("%d%c",ans,'b');
int k= arr[1]%2;
arr[1]-=arr[1]%2;

arr[0]-=k;
for(i=0;i<4;i++)	{
printf("%d\n",arr[i]);
if(arr[i]>0)
ans=ans + arr[i]%4;
ans=ans + arr[i]/4;
}
printf("%d",ans);
return 0;
}
