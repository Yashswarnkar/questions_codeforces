#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()	{
int i;
char ch[100];

scanf("%s",ch);
strlwr(ch);
for(i=0;i<'\0';i++)	{
if(ch[i]!='a'||ch[i]!='o'||ch[i]!='y'||ch[i]!='e'||ch[i]!='u'||ch[i]!='i')
printf(".%c",ch[i]);
}



return 0;
}
