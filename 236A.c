#include<stdio.h>
int main()	{
char ch [100];
int arr[26]={0};
int a,i;
char ch1;
scanf("%s",ch);
for( i=0;ch[i]!='\0';i++)	{
 a = ch[i];
a= a-97;
//printf("%d\n",a);
arr[a]=arr[a]+1;

}
//for( i=0;i<26;i++)	{
//printf("%d\n",arr[i]);
//}
int sum=0;
for( i=0;i<26;i++)	{
if(arr[i]==1)	{
sum++;
}
else if(arr[i]>1)
sum++;
}

if(sum%2==0)
printf("CHAT WITH HER!");
else 
printf("IGNORE HIM!");
return 0;
}
