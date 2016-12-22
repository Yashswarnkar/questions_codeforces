#include<stdio.h>
int main()	{
int t;
scanf("%d",&t);
while(t-->0)	{
int i,count=0;
char ch[100];

scanf("%s",ch);
//printf("%s\n",ch);
while (ch[count]!='\0')	{
count++;
}
if(count>10)
printf("%c%d%c\n",ch[0],count-2,ch[count-1]);
else printf("%s\n",ch);
}
return 0;
}
