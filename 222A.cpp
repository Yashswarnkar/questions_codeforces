#include<bits/stdc++.h>
using namespace std;
int main()	{
int n,k;
cin>>n>>k;
int arr[n];
int count=0;
bool flag=true;
for(int i=0;i<n;i++)
cin>>arr[i];
for(int i=k-1;i<n-1;i++){
if(arr[i]!=arr[i+1])
flag=false;

}
for(int i=0;i<k;i++){
if(arr[i]!=arr[k-1])
count++;
}
if(flag==true&&count<k)
cout<<n-k;
else cout<<"-1";
}
