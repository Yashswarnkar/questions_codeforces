#include<bits/stdc++.h>
int arr[3]={0};
int main()	{
int a;

int n[a];
char ch[200000];
scanf("%d",&a);
scanf("%s",ch);
for(int i=0;i<a;i++)	{

if(ch[i]=='A')
arr[0]+=1;
else if(ch[i]=='F')
arr[1]+=1;
else
arr[2]+=1;

}

if(arr[2]>1)
printf("0");
else if(arr[2]==1)
printf("1");
else printf("%d",arr[0]);

}
