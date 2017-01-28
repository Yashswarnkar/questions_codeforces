#include<bits/stdc++.h>
int arr[100005]={0};
long long int dp[100005]={0};
int visited[100005]={0};

int main()	{
int n,m;
std::cin>>n>>m;

for(int i=0;i<n;i++)
std::cin>>arr[i];
dp[n-1]=1;
visited[arr[n-1]]=1;
long long int ans;
for(int i=n-2;i>=0;i--){
if(visited[arr[i]]==0){
dp[i]=1+dp[i+1];
visited[arr[i]]=1;
}
else {
dp[i]=dp[i+1];

}
}
while(m-->0)	{
int a;
std::cin>>a;

std::cout<<dp[a-1]<<"\n";
}
}
