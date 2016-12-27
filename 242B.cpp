#include<bits/stdc++.h>
using namespace std;
int main()	{
int n;
cin>>n;
vector<pair<long long int,long long int> > vi,vi1;
long long int max =0,min=10000000000;
for(int i=0;i<n;i++)
{
int a,b;
cin>>a>>b;
vi.push_back(make_pair(a,b));
vi1.push_back(make_pair(a,b));
}
int flag=0;
int index1=0,index2=0,index=-1;
sort(vi.begin(),vi.end());
for(int i=0;i<n;i++){
if(vi[i].first<=min){
min=vi[i].first;
index1=i+1;
}
if(vi[i].second>max){
max=vi[i].second;
index2=i+1;
}
}
if(index1==index2){
for(int i=0;i<n;i++){
if(vi1[i].first==min&&vi1[i].second==max){
index=i+1;
flag=1;
}
}
if(flag==1)
cout<<index;
else cout<<"-1";
}
else {
cout<<"-1";
}

}
