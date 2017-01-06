#include<stdio.h>
int main()	{
char ch[50];
char temp;
int t;
int i,j,sum;
scanf("%d",&sum);
scanf("%d",&t);
scanf("%s",ch);
for(i=0;i<t;i++)	{
for(j=sum-1;j>0;j--)	{
if(ch[j]=='G'&&ch[j-1]=='B')	{
temp=ch[j];
ch[j]=ch[j-1];
ch[j-1]=temp;
j--;
}
}
}
for(i=0;ch[i]!='\0';i++)
printf("%c",ch[i]);
return 0;
}
