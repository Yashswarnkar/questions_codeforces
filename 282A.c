#include<stdio.h>
int main()	{
char ch[5];
int i,j;
int ans=0;
int n;
scanf("%d",&n);

//printf("%s",ch);
for(j=0;j<n;j++)	{
scanf("%s",ch);

if(ch[1]=='-')	{
ans=ans-1;
//break;
}
else if(ch[1]=='+')	{
ans=ans+1;
//break;
}

}
printf("%d",ans);
return 0;
}

