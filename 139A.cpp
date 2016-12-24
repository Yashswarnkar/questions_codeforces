#include<bits/stdc++.h>
using namespace std;
int main()	{
int n;
cin>>n;
int arr[7];
int count=0;
for(int i=0;i<7;i++){
cin>>arr[i];
}
count=0;
int index=0;
while(count<n){
for(int i=0;i<7;i++){
if(count<n){
count+=arr[i];

}
if(count>=n) {index=i;break;}
}
}
cout<<index+1;
}
