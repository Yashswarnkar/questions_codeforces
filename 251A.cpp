#include<bits/stdc++.h>
int main()	{
int n,count=0;
long long int m,ans=0;
std::cin>>n>>m;
long long int arr[n];
for(int i=0;i<n;i++)
std::cin>>arr[i];
int i=0;
for(int j=0;j<n;j++)	{
while(i<n&&arr[i]-arr[j]<=m)
i++;
i--;
count=i-j;
ans+=count*(count-1)/2;
}
std::cout<<ans<<"\n";
}
