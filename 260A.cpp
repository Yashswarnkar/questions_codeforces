#include<bits/stdc++.h>
using namespace std;
int main()	{
int a,b,n;
cin>>a>>b>>n;
int flag=0;
long long int a1=a,count=0;
while(count<9){
if(((a1*10)+count)%b!=0){
count++;
}
else break;
}
if(count<10){
cout<<a1*10+count;
for(int i=1;i<n;i++)
cout<<"0";
}
else cout<<"-1";
}
