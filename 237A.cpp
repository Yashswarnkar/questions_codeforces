#include<bits/stdc++.h>
using namespace std;
int arr[10000]={0};
int main()	{
int  n;
cin>>n;
for(int i=0;i<n;i++)
{
int a,b;
cin>>a>>b;
arr[a*60+b]+=1;
}
int max=0;
for(int i=0;i<10000;i++){
if(max<arr[i])
max=arr[i];
}
cout<<max;
}
