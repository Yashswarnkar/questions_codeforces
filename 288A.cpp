#include<bits/stdc++.h>
using namespace std;
int main()	{

int n,m;
int count=2;
int d=0;

std::cin>>n>>m;
char ch[n+1];
d=n-m;
bool flag=false;
if(d>=0&&m!=1)	{
ch[0]='a';
ch[1]='b';
for(int i=0;i<d;i++)	{
if(flag==false)	{
ch[2+i]='a';
flag=true;
//printf("here1");
}
else 	{
ch[2+i]='b';
flag=false;
//printf("here2");
}

}
for(int i=0;i<m-2;i++)	{
int c1= char(count+i+97);
ch[n-m+2+i]=char(c1);
//printf("here3");
}
for(int i=0;i<n;i++)
std::cout<<ch[i];
}
 else if(n==m) printf("a");
else printf("-1");
}
