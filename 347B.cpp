#include<bits/stdc++.h>
long long int arr[1000000]={0};
int main()	{
long long int n,ans=0;
std::cin>>n;
for(long long int i=0;i<n;i++){
std::cin>>arr[i];
if(arr[i]==i)
ans++;
}
int count=0,flag=0;
long long int i=0,j=0,k=0;
for(;i<n;i++,j++){
if(arr[i]!=i&&flag==0){
for(k=i+1;k<n;k++){
if(i==arr[k]){
if(arr[i]==k){
count=2;flag=1;break;}
else count=1;
}
}
}
}
std::cout<<count+ans;

}
