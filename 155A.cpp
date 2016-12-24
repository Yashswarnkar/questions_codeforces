#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int count=0;
int arr[n];
cin>>arr[0];
int min=arr[0];
int max=arr[0];
for(int i=1;i<n;i++){
cin>>arr[i];
if(arr[i]>max){
count++;
max=arr[i];
}
if(arr[i]<min){
count++;
min=arr[i];

}
}
cout<<count<<'\n';
}
