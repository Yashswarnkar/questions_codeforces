#include<bits/stdc++.h>

int main()	{
int n;
cin>>n;
int arr[n+1];
int arr1[n];
for(int i=1;i<n+1;i++){
cin>>arr[i];
arr1[i]=i;
}
sort(arr,arr+n);
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++)
if(arr[j]%arr[i]==0&&i!=j&&arr[j]!=0){
arr1[j]=count+1;
}
}
}
