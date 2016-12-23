#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

int arr[26];
for(int i=0;i<=10;i++)
arr[i]=0;

for(int i=11;i<=19;i++)
arr[i]=4;
arr[20]=15;
arr[21]=4;
arr[22]=0;
arr[23]=0;
arr[24]=0;
arr[25]=0;
cout<<arr[n]<<'\n';
}
