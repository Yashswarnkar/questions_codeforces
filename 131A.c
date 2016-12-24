#include<stdio.h>
#include<stdbool.h>
int main()	{
char ch[101];
int i,n;
bool b=true;
bool c=true;
scanf("%s",ch);
//for(i=0;ch[i]!='\0';i++)
//printf("%c",ch[i]);
for(i=1;ch[i]!='\0';i++)	{
if(ch[i]>=65&&ch[i]<97)	{
b=true;//printf("%c\n",ch[i]);
}
else c=false;

}
if (c==b&&ch[0]<97)	{
for(i=0;ch[i]!='\0';i++)	{
printf("%c",ch[i]+32);

}
}
else if(c==b&&ch[0]>=97)	{
printf("%c",ch[0]-32);
//printf("%d",4);
for(i=1;ch[i]!='\0';i++)	{
printf("%c",ch[i]+32);
//printf("%d",6);
}

}
else{ for(i=0;ch[i]!='\0';i++) printf("%c",ch[i]);}
return 0;
}
