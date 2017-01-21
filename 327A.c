#include<stdio.h>
#include<stdbool.h>
int main()	{
int n,i=0,ai=0,ar=0,count=0;
scanf("%d",&n);
int b=0;
//printf("yash");
int arr[n][2];
for(i=0;i<n;i++)	{
arr[i][0]=0;
arr[i][1]=0;
}
int a[n];
for(i=0;i<n;i++)	{
scanf("%d",&a[i]);
}
//printf("yash1");
i=0;
while(b == 0 && i<n)	{
//printf("yash4");
if(a[i]==1)	{
ai++;
arr[i][0]=ai;
arr[i][1]=0;
i++;
printf("yash4\n");
printf("%d%d",arr[i][0],arr[i][1]);
}
else {
ar++;
arr[i][1]==ar;
arr[i][0]=ai;
i++;
b=1;
printf("%d%d",arr[i][0],arr[i][1]);
printf("yash3");
}
}
while(b=1&&i<n)	{
if(a[i]==1)	{
arr[i][0]=ai++;
arr[i][1]=ar;
i++;
printf("%d%d",arr[i][0],arr[i][1]);
}
else {
arr[i][1]==ar++;
arr[i][0]=ai;
i++;
printf("%d%d",arr[i][0],arr[i][1]);

}
}
count=arr[0][0]-arr[0][1];
//printf("yash2");
for(i=1;i<n;i++)	{
if(count<(arr[i][0]-arr[i][1]))
count=(arr[i][0]-arr[i][1]);
}

printf("%d\n",count);

}
