#include<bits/stdc++.h>
using namespace std;
int main()	{
int n,m;
cin>>n>>m;
int arr[m];
for(int i=0;i<m;i++)
cin>>arr[i];
priority_queue<int> q (arr,arr+m);
sort(arr,arr+m);
int min=0,max=0,count=0;
while(count<n)
{
int top=q.top();
q.pop();
max+=top;
top--;
q.push(top);
count++;
}
count=0;
int i=0;
while(count<n){
if(arr[i]>0){
min+=arr[i];
count++;
arr[i]-=1;
}
else i++;


}
cout<<max<<" "<<min;
}
