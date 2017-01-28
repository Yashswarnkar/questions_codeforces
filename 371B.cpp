#include<bits/stdc++.h>
using namespace std;
int main()	{
long long int x,y,ans1=1,ans2=1;
cin>>x>>y;
int a[3],b[3];
memset(a,0,sizeof(a));
memset(b,0,sizeof(b));
do {
if(x%2==0){
a[0]+=1;
x=x/2;
}
else if(x%3==0){
a[1]+=1;
x=x/3;
}
else if(x%5==0){
a[2]+=1;
x=x/5;
}
else {
ans1=x;
x=1;
}
}while(x!=1);
do {
if(y%2==0){
b[0]+=1;
y=y/2;
}
else if(y%3==0){
b[1]+=1;
y=y/3;
}
else if(y%5==0){
b[2]+=1;
y=y/5;
}
else {
ans2=y;
y=1;

}
}while(y!=1);
//cout<<ans1<<" "<<ans2;
if(ans1!=ans2){
cout<<"-1";
}
else {
cout<<abs(a[0]-b[0])+abs(a[1]-b[1])+abs(a[2]-b[2]);
}
}
