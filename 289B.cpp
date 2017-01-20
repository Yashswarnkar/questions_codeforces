#include<bits/stdc++.h>
using namespace std;

int main()	{
int n,m,d;
cin>>n>>m>>d;
int arr[n*m];
int flag=1;
int flag1=0;
int count=0;
for(int i=0;i<n*m;i++){
cin>>arr[i];


}


sort(arr,arr+(n*m));
int a=arr[(n*m)/2];
for(int i=0;i<n*m;i++){
if(arr[i]!=arr[(n*m/2)]){
int a1 =abs(arr[i]-arr[(m*n)/2]);
count+=(a1/d);
if(a1%d!=0)flag=0;
}
}
if(flag==1)
cout<<count;
else cout<<"-1";
}


