#include<bits/stdc++.h>
using namespace std;
int main()	{
int n,m;
cin>>n>>m;
int arr[n],inp[3];
memset(arr,-1,sizeof(arr));
for(int i=0;i<m;i++){
cin>>inp[0]>>inp[1]>>inp[2];
if(arr[inp[0]]!=-1){
arr[inp[1]]^=arr[inp[0]];
arr[inp[2]]=arr[inp[0]]^arr[inp[1]];
}
else if(arr[inp[1]]!=-1){
arr[inp[0]]^=arr[inp[1]];
arr[inp[2]]=arr[inp[1]]^arr[inp[0]];
}
else if(arr[inp[2]]!=-1){
arr[inp[0]]^=arr[inp[2]];
arr[inp[1]]=arr[inp[2]]^arr[inp[0]];
}
else {
arr[inp[1]]=1;
arr[inp[2]]=2;
arr[inp[0]]=3;
}
}
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
}
