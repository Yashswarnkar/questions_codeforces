#include<bits/stdc++.h>
int main()	{
int n,m;
std::cin>>n>>m;
long long int arr[n+5];
int t,y,q;
long long int v,x;
for(int i=1;i<=n;i++)
std::cin>>arr[i];
while(m-->0)	{
std::cin>>t;
if(t==3)	{
std::cin>>q;
printf("%lld\n",arr[q]);
}
else if(t==2)	{
scanf("%d",&y);
for(int i=1;i<=n;i++)
arr[i]+=y;
}
else {
std::cin>>v>>x;
arr[v]=x;

}
}
}
