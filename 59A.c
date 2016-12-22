#include<stdio.h>
int arr1[27]={0};
int arr2[27]={0};
int main()	{
char ch[100];
scanf("%s",ch);
int i,a,b,count1=0,count2=0;
for(i=0;ch[i]!='\0';i++)	{
if(ch[i]>=65&&ch[i]<=90)	{
a=(int)ch[i];
arr1[a]+=1;
count1++;
}
else 	{
b=(int)ch[i];
arr2[b]+=1;
count2++;
}
}
if(count1>count2)	{
for(i=0;ch[i]!='\0';i++){
      if(ch[i]>=97&&ch[i]<=123)
       ch[i]=ch[i]-32;
printf("%c",ch[i]);
}
}
else {
for(i=0;ch[i]!='\0';i++){
      if(ch[i]>=65&&ch[i]<=90)
       ch[i]=ch[i]+32;
printf("%c",ch[i]);
}
}
}
