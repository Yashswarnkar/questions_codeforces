#include<stdio.h>
int main()	{

int r,c,count=0,ans=0,j,i,flag=0;
char a;
scanf("%d%d",&r,&c);
char arr[r][c];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)	{
scanf("%c",&arr[i][j]);
printf("%c",arr[i][j]);
if(arr[i][j]=='S')	{
flag=1;
printf("yash");
}


}
if(flag==0)
count=count+c;
printf("%d",count);
flag=0;
}
flag=0;
for(i=0;i<c;i++)
{flag=0;
for(j=0;j<r;j++)	{
if(arr[j][i]=='S')
flag=1;


}
if(flag==0)
ans=ans+r-(count/c);

}

printf("%d",ans);

}
