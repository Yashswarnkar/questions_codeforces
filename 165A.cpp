#include<bits/stdc++.h>
using namespace std;
int main()	{
int n;
cin>>n;
int arrx[n],arry[n];
int ans[n];
int count=0;
for(int i=0;i<n;i++)
{
cin>>arrx[i]>>arry[i];
}
for(int i=0;i<n;i++){
int top=0,bottom=0,left=0,right=0;
for(int j=0;j<n;j++){
if(i!=j){
if(arrx[i]==arrx[j]){
if(arry[i]>arry[j])
top=1;
else bottom=1;
}
if(arry[i]==arry[j]){
if(arrx[i]>arrx[j])
right=1;
else left=1;
}

}

}
if(top&&bottom&&left&&right){
count++;
}
}
cout<<count;
}

